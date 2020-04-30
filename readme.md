# Calendaino

一个运行在Arduino UNO上的万年历，无需外部时钟模块，每日误差不大于0.3s！

Calendaino能够处理月份天数和平闰年问题，能够自动计算从1900年1月1日起任何一天是星期几。它将会在公元32767年溢出，如果想延迟溢出时间，可以吧Calendaino类中任何有关Years变量的调用方法改为unsigned long，但应该没有必要，至少我应该不能活到公元32767年(￣▽￣)~*

Calendaino中使用了开源的MsTimer2库提供的中断计时器，感谢MsTimer2库的作者Javier Valencia！这里留下MsTimer2库的链接：https://www.pjrc.com/teensy/td_libs_MsTimer2.html。

# 关于开源协议

仓库中Calendaino库本身，以及通过该程序衍生得产品，均属于开源软件，遵守GNU通用公共许可证，即GNU GPL。

GNU GPL协议授予程序接受人以下权利，或称“自由”：

- 以任何目的运行此程序的自由；

- 再发行复制件的自由；

- 改进此程序，并公开发布改进的自由。

GNU GPL不会授予许可证接受人无限的权利。再发行权的授予需要许可证接受人开放软件的源代码，及所有修改。且复制件、修改版本，都必须以GPL为许可证，这是为了确保任何使用者不会独自占有开源软件。使用、复制或更改Calendaino的程序接受人视为同意GNU GPL协议，必须再次开源其更改后的派生物（如源代码等），否则将追究法律责任。

关于协议版本，Calendaino本身使用GPL v2协议，而MsTimer2使用LGPL v2.1协议，互不影响。

关于GPL v2协议，上述说明仅做参考，具体细节请以LICENSE为准，Calendaino原作者Jackie Lin(用户名lyj00912，<https://github.com/lyj00912> )保留一切解释权。

