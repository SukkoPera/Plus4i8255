# Plus4i8255
Plus4i8255 is an Intel 8255 Interface for the Commodore 16, 116 and Plus/4.

![Board](https://raw.githubusercontent.com/SukkoPera/Plus4i8255/master/img/render-top.png)

## Summary
The Intel 8255 is a general purpose programmable I/O device featuring 24 I/O pins which may be individually programmed in 2 groups
of 12 and used in 3 major modes of operation.

Plus4i8255 is based on the [article published in Rádiótechnika 1988/12](https://plus4world.powweb.com/publications/Radiotechnika_1988_december) by Ferenc Garay and Dr. János Rohonczy with a few improvements: the board has been made much smaller, the ICs doing address decoding have been turned into a GAL for easy reconfigurability (both GAL20 and GAL22 are supported) and pull-up resistors have been added on all inputs.

## Assembly
Intel 8255 chips can all be bought supercheap on AliExpress & similar sites. There are only a couple of other components, making this board very affordable to build for everyone.

## Software
The board is generic and can be used for a multitude of purposes, but its most common usage back in the day was to connect a 1541 drive in a parallel fashion, making it faster when used with software such as [Port-Turbo V1](https://plus4world.powweb.com/software/Port-Turbo_V1) or [Port-Backup](https://plus4world.powweb.com/software/Port-Backup).

## Programming
The board exposes the four 8255 registers at $FE03:
|Address | Description
|-----|----------------|
|$FE00|Port A Register |
|$FE01|Port B Register |
|$FE02|Port C Register |
|$FE03|Control Register|


## Releases
If you want to get this board produced, you are recommended to get [the latest release](https://github.com/SukkoPera/Plus4i8255/releases) rather than the current git version, as the latter might be under development and is not guaranteed to be working.

Every release is accompanied by its Bill Of Materials (BOM) file and any relevant notes about it, which you are recommended to read carefully.

## License
The Plus4i8255 documentation, including the design itself, is copyright &copy; SukkoPera 2024 and is licensed under the [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License](https://creativecommons.org/licenses/by-nc-sa/4.0/).

This documentation is distributed *as is* and WITHOUT ANY EXPRESS OR IMPLIED WARRANTIES whatsoever with respect to its functionality, operability or use, including, without limitation, any implied warranties OF MERCHANTABILITY, SATISFACTORY QUALITY, FITNESS FOR A PARTICULAR PURPOSE or infringement. We expressly disclaim any liability whatsoever for any direct, indirect, consequential, incidental or special damages, including, without limitation, lost revenues, lost profits, losses resulting from business interruption or loss of data, regardless of the form of action or legal theory under which the liability may be asserted, even if advised of the possibility or likelihood of such damages.

## Support the Project
If you want to get some boards manufactured, you can get them from PCBWay through this link:

[![PCB from PCBWay](https://www.pcbway.com/project/img/images/frompcbway.png)](https://www.pcbway.com/project/shareproject/Plus4i8255_V2_Intel_8255_Interface_for_the_Commodore_16_116_and_Plus_4_7e3afe66.html)

You get my gratitude and cheap, professionally-made and good quality PCBs, I get some credit that will help with this and [other projects](https://www.pcbway.com/project/member/shareproject/?bmbid=41100). You won't even have to worry about the various PCB options, it's all pre-configured for you!

Also, if you still have to register, [you can use this link](https://www.pcbway.com/setinvite.aspx?inviteid=41100) to get some bonus initial credit (and yield me some more).

You can also buy me a coffee if you want:

<a href='https://ko-fi.com/L3L0U18L' target='_blank'><img height='36' style='border:0px;height:36px;' src='https://az743702.vo.msecnd.net/cdn/kofi2.png?v=2' border='0' alt='Buy Me a Coffee at ko-fi.com' /></a>
