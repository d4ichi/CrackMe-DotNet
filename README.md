# CrackMe Source Code (.NET Framework)
This repository offers source codes for CrackMes with modern GUI forms written in Visual C++ with CLR. The main target of this repository is CTF organizers or Computer Science students who would like to develop small CrackMe with modern GUI or anyone interested in Software Reverse Engineering.

<p>You can find a compiled EXE binary in Release folder for each CrackMe.</p>

## For CrackMe Creators
Indeed I provide some simple key evaluation functions, you can edit it and make your CrackMe harder as much as you want. All CrackMe here can popup information dialog. So you can put some information about your CTF, author, deadline, or instructions with just replacing some sentences.

## For Computer Science Students
If you are studying Software Reverse Engineering, disassembling CrackMe is a good way to start your practical exercise. If you don't feel you are ready for CrackMes out there on GitHub, you could start coding your own CrackMe and disassemble it. It will be much easier to play around with because you are the creator of the CrackMe.
Additionally, it's good for learning Reverse Engineering to observe the consequence of your code/implementation of obfuscation in disassembled form.

Or you could send your CrackMe to your learning buddy!


## Contents

### CrackMe00
<p>No user inputs are required.</p>
<p>This CrackMe gets the date when it's launched and check if it's before the expiration date.</p>

![CrackMe](https://github.com/d4ichi/CrackMe-DotNet/blob/master/Resource/img/crackme_no_input.png)

### CrackMe01
<p>One user input is required.</p>
<p>This CrackMe compares user input with a plain text key.</p>

![CrackMe](https://github.com/d4ichi/CrackMe-DotNet/blob/master/Resource/img/crackme_one_input.png)

<p>Key for the sample binary: </p>

```
FH8YALGR
```

## Requirements
- All source codes here are written in Microsoft Visual Studio 2017.
- Microsoft Visual C++ with CRL
- Target Platform: Windows Desktop 32Bit/64Bit with .NET Framework enabled

<p>Install "Desktop development with C++" workload with "C++/CLI support."</p>

![VS2017](https://github.com/d4ichi/CrackMe-DotNet/blob/master/Resource/img/vs2017_installation.png)

## How to Build
Clone the entire repository first and open solution file (.sln) on Visual Studio.
To build the solution, you have to manually set 2 properties for each solution.
<p>Navigate to "Project -> Properties" on Visual Studio toolbar and set two properties. Make sure set "Configuration: All Configurations" and "Platform: All Platforms" before you set the values below.</p>

- Linker -> System -> Subsystem: Windows [(detail)](https://github.com/d4ichi/CrackMe-DotNet/blob/master/Resource/img/config01.png "detail")
- Linker -> Advanced -> Entry Point: main  [(detail)](https://github.com/d4ichi/CrackMe-DotNet/blob/master/Resource/img/config02.png "detail")

<p>Then, hit "Build -> Build Solution" on toolbar to build the solution!</p>

## Notes
I will update/add new CrackMe source codes or templates occasionally.
<p>The "ClaimToFame CTF" is an imaginary competition. Replace it to whatever you want.</p>
