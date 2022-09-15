# RibbonEnablerForWindows11
This tool allows you to change the explorer.exe interface to ribbon

![Screenshot_2022-09-38-15-16-55-36-835](https://user-images.githubusercontent.com/89962566/190437081-6725f0de-174a-4527-9714-dc710c8cd902.png)


# Command Prompt
Enable Ribbon: reg.exe add "HKLM\SOFTWARE\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v {e2bf9676-5f8f-435c-97eb-11607a5bedf7} /t REG_SZ /f

Disable Ribbon: reg delete "HKLM\SOFTWARE\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked" /v {e2bf9676-5f8f-435c-97eb-11607a5bedf7} /f
