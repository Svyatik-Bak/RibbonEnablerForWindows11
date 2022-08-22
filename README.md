# RibbonEnablerForWindows11
This tool allows you to change the explorer.exe interface to ribbon

![Screenshot_2022-08-33-14-11-55-37-118](https://user-images.githubusercontent.com/89962566/184531758-8db6b151-e717-4539-853d-b343b9633b6b.png)

# Command Prompt
Enable Ribbon: reg.exe add "HKLM\SOFTWARE\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v {e2bf9676-5f8f-435c-97eb-11607a5bedf7} /t REG_SZ /f

Disable Ribbon: reg delete "HKLM\SOFTWARE\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v {e2bf9676-5f8f-435c-97eb-11607a5bedf7} /f
