# nist-challenge-plugin
Brilliant Sole UE4 plugin

Requires use of the [Brilliant Sole API](https://github.com/brilliantsole/nist-challenge)

## Setup

Paste the Plugins folder directly into the root directory of your Unreal project. The plugin will be loaded the next time the editor is loaded, and will appear under Project in the Plugins browser.

The plugin may also be installed at the engine level to be available to all projects. For instructions on how to do that, [full Unreal Plugin documentation can be found here.](https://docs.unrealengine.com/latest/INT/Programming/Plugins/)

## Content
Plugin main content is a Blueprint Function Library that implements some API functions. 
Two request functions are exposed, `Send Update Request` and `Send State Request`. As responses are not guaranteed in a timely manner, instead the library exposes two fields that are updated whenever they can be, `Get Cached Update Result` and `Get Cached State`, respectively. Requests and responses have appropriate blueprint types.

The plugin also includes a sample map with a sample blueprint that allows requests to be debugged easily. 

The `BS_DiagnosticPanel` blueprint exposes 5 boolean variables that correspond to the update request data, which is sent once a second to not bog down the API.

## Troubleshooting

As this plugin contains C++, in the event that the plugin fails to compile or load with the project the plugin will need to be recompiled manually. This will need to be done in a C++ Unreal plugin. If the project does not have a Visual Studio solution, right click the projects main `.uproject` file and select `Generate Visual Studio project files`. This solution can then be opened and built to recompile the C++ project as well as component plugins.

In the extreme case, deleting the current solution (`*.sln`), as well as the  `Intermediate/` and `Saved/` directories and then regenerating the solution may fix compiler errors.

## Known Issues

* Http Requests being async makes blueprint nodes unable to immediately return responses/results without halting execution.
* Sending update/devices requests at intervals <0.5s seems to bog down the API with requests, rendering the devices unresponsive.
* Does not start up service itself yet, may crash Unreal if backend is not running.
