# lab01_廖宇_521260910005  

## 源代码       
[https://github.com/Benjamin2406ly/C_class_s2_TD_homework.git](https://github.com/Benjamin2406ly/C_class_s2_TD_homework.git)

  为了解决给出的特定Josephus问题，我使用了两种方法，分别是**标准方法**与**链表方法**。其中标准方法函数Josephus_std在src\task5.c第61行，链表方法函数Josephus_linkedlist在src\task5.c第29行，节点结构体定义在ins\task5.h，main函数在src\main.c中，其中仅调用了Josephus_std（链表函数似乎进入死循环了，一直没有输出，fflush()强制输出也没成，算是失败了）。源代码采用Cmake编译，可执行文件为task5.exe。
  
  若老师需要debug代码，请将launch.json中的program和miDebuggerPath修改成您电脑中可执行文件绝对地址和gbd绝对地址，或者直接使用相对地址。如果编译代码时出错，注意检查电脑cmake版本。我在CMakeLists.txt中限制了Cmake版本至少高于3.5.0。
  
## 实验报告    
