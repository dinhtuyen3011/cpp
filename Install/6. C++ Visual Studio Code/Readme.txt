C++ with Visual Studio Code
---------------------------
https://code.visualstudio.com/docs/cpp/config-mingw
1 - Install:
 -> C/C++
 -> C/C++ Clang Command Adapter
 -> C++ Intellisense
 -> Code Runner (Run C/C++, Java,...)

2 - Configurations:

Type: Debugger
When I use the default "g++.exe build and debug active file" and there's no output in internal terminal. However, when using external terminal it works. Have no idea.

Here's my launch.json and tasks.json:

{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
    
        {
            "name": "Python: Terminal (external)",
            "type": "python",
            "request": "launch",
            "program": "${file}",
            "console": "externalTerminal"
        },
        {
            "name": "g++.exe build and debug active file",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": true,
            "MIMode": "gdb",
            "miDebuggerPath": "C:\\MinGW\\bin\\gdb.exe",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "g++.exe build active file"
        }
    ]
}

{
  "tasks": [
    {
      "type": "shell",
      "label": "g++.exe build active file",
      "command": "C:\\MinGW\\bin\\g++.exe",
      "args": [
        "-g",
        "${file}",
        "-o",
        "${fileDirname}\\${fileBasenameNoExtension}.exe"
      ],
      "options": {
        "cwd": "C:\\MinGW\\bin"
      }
    },
    {
      "type": "shell",
      "label": "gcc.exe build active file",
      "command": "C:\\MinGW\\bin\\gcc.exe",
      "args": [
        "-g",
        "${file}",
        "-o",
        "${fileDirname}\\${fileBasenameNoExtension}.exe"
      ],
      "options": {
        "cwd": "C:\\MinGW\\bin"
      }
    }
  ],
  "version": "2.0.0"
}
BTW: Another bug confused me a lot, however after I reinstall the VSCode it disappeared, but if you can help me out I'd like to appreciate it. The link is here: microsoft/vscode#70542

Describe the bug

OS and Version: Win 10 1809
VS Code Version: 1.32.3
C/C++ Extension Version: 0.22.1

  