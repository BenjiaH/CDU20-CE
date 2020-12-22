# 2020-2021第一学期学长课堂期末考核

- 通信工程20-3

- 考核截止时间：2020年1月22日23:59。

- 注意事项：
  - 1.本次考核共有两个大题，任选其一即可。下载资料后请解压文件；
  - 2.请将考核提交作品放入文件夹并压缩成“ .zip”文件，文件夹与压缩文件均命名为“学号_姓名_题目编号”。例如：“202010428301_张三_1.zip”；
  - 3.请在截止日期前将压缩包提交给科技委员；
  - 4.若选题为“PCB电路设计”
    - a.提交前请将工程文件夹中的“History”文件夹删除；
    - b.原理图位于“2020-2021-1_final_exam\PCB_Design\STC89C52_core_board\STC89C52_core_board.pdf”；
    - c.集成库文件位于“2020-2021-1_final_exam\PCB_Design\STC89C52_core_board\STC89C52_core_board.IntLib”；
    - d.严禁使用自动布线。
  - 5.若选题为“C语言程序设计”，只需提交源代码(C Source file)文件；
  - 6.严禁抄袭，若有雷同，严肃处理。

## 一、PCB电路设计

- 1.请安装本次考核提供的PCB专用库(STC89C52_core_board.IntLib)，否则3D封装会出错，若使用本次考核以外封装库，成绩作废。原理图的绘制一定要和PDF文档一致，不得自行更改，切记！
- 2.提交说明：提交的文件夹中需要包含三个文件，并且三个文件的命名均为“STC89C52_core_board”，如图：
![3_fiels](data/img/2020-12-22_16-25-57_img.png)
- 3.以下几点为具体设计要求：
  - 1.元件布局合理、美观，使整个设计人性化；
  - 2.信号线拐角没有小于等于90 度的弧角；信号线线宽为10-15mil；飞线尽量少；
  - 3.电源线的粗细根据所连接芯片的功耗、类型而决定，线宽可从10mil、20mil、30mil、40mil、50mil 中选择；
  - 4.对焊盘加有“滴泪(Teardrops)”，PCB 图的“工具”中选择“滴泪”；信号线的过孔内径(Hole Size)设为8mil，外径(Diameter)设为15mil；电源线的过孔大小由电源线的粗细决定，Hole Size 比线宽小2mil，Diameter 比线宽大5mil；丝印层调整参数Text Height为0.8mm，Stroke Width为0.15mm。
- 4.工程的设计规则设置（从Altium Designer的主菜单中执行菜单命令Design->Rules，即设计->规则），具体设置如下图所示，设置完成后点击“应用”，再点击“确定”。
  - 1.Clearance(安全距离)选项区域里设置安全距离为6mil；
![Clearance](data/img/2020-12-22_16-30-40_PCB_Rules_and_Constraints_Editor.png)
  - 2.Plane(版图平面)区域的Polygon Connect设置为Direct Connect 。
![Polygon Connect](data/img/2020-12-22_16-31-31_PCB_Rules_and_Constraints_Editor.png)

## 二、C语言程序设计

- 利用现学C语言知识编写一个简单的计算器。要求有如下功能:
  - 1.整数及浮点数的加、减、乘、除（含余数）；
  - 2.可以实现十进制与二进制的转换；十六进制与二进制的相互转换；
  - 3.两个整数的求模运算；
  - 4.输入两个正整数，求其GCD和LCM。
- 注意事项：此程序需要与用户进行交互信息（如：提示用户选择功能、输入数字等）;代码格式尽量规范。

## 三、考核资料下载地址

下载地址：[2020-2021-1_final_exam.zip](https://cs-ans.chaoxing.com/download/760fffc98547294ce875d37141a51154)
