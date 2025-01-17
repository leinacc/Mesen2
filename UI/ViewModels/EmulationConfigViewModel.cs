﻿using Avalonia.Controls;
using Mesen.Config;
using Mesen.Utilities;
using ReactiveUI.Fody.Helpers;

namespace Mesen.ViewModels
{
	public class EmulationConfigViewModel : DisposableViewModel
	{
		[Reactive] public EmulationConfig Config { get; set; }

		public EmulationConfigViewModel()
		{
			Config = ConfigManager.Config.Emulation.Clone();

			if(Design.IsDesignMode) {
				return;
			}

			AddDisposable(ReactiveHelper.RegisterRecursiveObserver(Config, (s, e) => { Config.ApplyConfig(); }));
		}
	}
}
