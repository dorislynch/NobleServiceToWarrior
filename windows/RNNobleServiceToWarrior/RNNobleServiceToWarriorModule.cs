using ReactNative.Bridge;
using System;
using System.Collections.Generic;
using Windows.ApplicationModel.Core;
using Windows.UI.Core;

namespace Noble.Service.To.Warrior.RNNobleServiceToWarrior
{
    /// <summary>
    /// A module that allows JS to share data.
    /// </summary>
    class RNNobleServiceToWarriorModule : NativeModuleBase
    {
        /// <summary>
        /// Instantiates the <see cref="RNNobleServiceToWarriorModule"/>.
        /// </summary>
        internal RNNobleServiceToWarriorModule()
        {

        }

        /// <summary>
        /// The name of the native module.
        /// </summary>
        public override string Name
        {
            get
            {
                return "RNNobleServiceToWarrior";
            }
        }
    }
}
