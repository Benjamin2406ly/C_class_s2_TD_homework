# lab01_廖宇_521260910005  

## 源代码       
[https://github.com/Benjamin2406ly/C_class_s2_TD_homework.git](https://github.com/Benjamin2406ly/C_class_s2_TD_homework.git)

  为了解决给出的特定Josephus问题，我使用了两种方法，分别是**标准方法**与**链表方法**。其中标准方法函数Josephus_std在src\task5.c第61行，链表方法函数Josephus_linkedlist在src\task5.c第29行，节点结构体定义在ins\task5.h，main函数在src\main.c中，其中仅调用了Josephus_std（链表函数似乎进入死循环了，一直没有输出，fflush()强制输出也没成，算是失败了）。源代码采用Cmake编译，可执行文件为task5.exe。
  
  若老师需要debug代码，请将launch.json中的program和miDebuggerPath修改成您电脑中可执行文件绝对地址和gbd绝对地址，或者直接使用相对地址。如果编译代码时出错，注意检查电脑cmake版本。我在CMakeLists.txt中限制了Cmake版本至少高于3.5.0。
  
## 实验报告    
n=10
![n=10](/assert/img/10.png "10")   
n=11
![n=11](/assert/img/11.png "11")     
n=12
![n=12](/assert/img/12.png "12")      
n=13
![n=13](/assert/img/13.png "13")    
n=14
![n=14](/assert/img/14.png "14")     
n=15
![n=15](/assert/img/15.png "15")      
n=16
![n=16](/assert/img/16.png "16")      
n=17
![n=17](/assert/img/17.png "17")    
n=18
![n=18](/assert/img/18.png "18")      
n=19
![n=19](/assert/img/19.png "19")      
n=20
![n=20](/assert/img/20.png "20")        

  标准方法给出的流程图，引用了**倒推**的思路：

>### 假设最后的赢家pre_winner为0
>
> - 那么上一轮人数count=2，由于最后pre_winner必须要报数1，上一轮也要报数1，两个报数1之间有2个间隔，那么根据人数count，我们得知pre_winner想要一直报数1，那么上一轮pre_winer为(0+count)%2,也就是(0+2)%2.
> - 由此类推，每一轮pre_winner的值为(下一轮值+这一轮count)%2.
> - 那么最初pre_winner的值为((...(((0+2)%2+2)%3+2)...)%(n-1)+2)%n
>
>这就是pre_winner原本在圈子里的值.
