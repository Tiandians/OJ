# 学习Linux的笔记

参考书籍：《Ubuntu Linux》指南 基础篇

## 第二章 安装规划

### 磁盘分区

`(swap)`:交换分区。应该是系统内存大小的两倍

`/boot`:内核和系统启动时所需的其他数据

`/var`:存放大量系统日志、软件包信息和记账数据，数据活动频繁

`/home`:用户主目录

`/`:

`/usr`:存放软件包等

### LVM:逻辑卷管理程序


## 第四章 Ubuntu Linux简介

### sudo

* 当你输入口令运行程序或在命令行上使用 sudo 时，你正在使用 root 特权身份。命令或程序结束后，你不再以 root 特权身份进行操作。

### 桌面

* GNOME 是 GNU 项目旗下的软件产品

* 运行文本界面运用程序：

```n
bash -c "df -h;read"
```

启动 bash shell ，执行选项 -c 之后的命令行部分，分号分隔两条命令。read 会让程序等待你按回车键才会终止。将 read 换成 sleep 10 可以让窗口保持开启状态 10 秒钟。

* 注销：在文本界面环境中按 CONTROL-D 组合键或者在 shell 提示符中输入 exit 。

* MIME 类型：

* 权限选项卡可以让文件所有者更改文件的权限，root 特权还能够更改用户的所有者。

* “执行”权限不能作用于目录。

### 获取资料
  
* `man`：显示系统手册
  * man 被划分为 10 部分：
    1. 用户命令 User Commands
    2. 系统调用 System Calls
    3. 子例程 Subroutines
    4. 设备 Devices
    5. 文件格式 File Formats
    6. 游戏 Games
    7. 其他 Miscellaneous
    8. 系统管理 System Administration
    9. 内核 Kernel
    10. 最新 New
  * 通常在 1.6.7 部分查找
  * 需要指定手册的某个部分，否则将显示最早出现的相关内容
  * -a 命令查看给定主题的所有 man 页
  
* `less`：分页程序。按下 h 键显示一组 less 命令，q 则会让 less 停止。

* `info`：显示实用工具的相关信息
  * h：查看有关 info 的交互手册
  * ?：列出 info 命令
  * SPACE：滚动浏览可用信息项菜单
  * m：后面跟着希望显示的菜单的名称，或者跟一个空格以显示菜单列表
  * q 或者 CONTROL-C：退出
  * 行左端的`*`号说明该条目是菜单项。
  * 每一个菜单项都是一个指向描述该项目的 info 页的链接
* [Ubuntu文档](help.ubuntu.con) 
* [GUN手册](www.gnu.org/manual)

### Linux CLI

* `CLI`：命令行（字符）界面
  * ctrl-w:删除一个单词
  * ctrl-z:挂起程序
  * fg:继续执行
  * ctrl-u:删除一行
  * ctrl-x:???
  * ctrl-c:终止执行
  * ctrl-h:退格

## 第五章 Linux实用工具

### 特殊字符：不要作为文件名

`& ; | * ? ' " `` [ ] ( ) $ < > { } # / \ ! ~`

转义控制字符的唯一方法是在它们前面加ctrl-v

```$
echo xxxxctrl-u
echo xxxxctrl-v ctrl-u
```

### 基本实用工具

* `cat`:显示文本文件内容
* `rm`:删除文件
* `less`or`more`:分屏显示文本文件
* `hostname`:显示系统名

### 文件操作

* `cp`:复制文件
将日期作为文件副本名字很有用
* `mv`:更改文件名（会覆盖文件）
* `lpr`:打印文件（可以多条） -lpq查看 -lprm停止
* `lpstat -p`:打印机列表
* `grep`:查找字符串
* `head`:显示头部
* `tail`:显示尾部
* `sort`:排序显示
* `uniq`:不显示连续重复行
* `diff`:比较两个文件（带-u）
* `file`:测试文件内容

### |：实现进程间的通信

* `wc -w`:显示指定文件中字数
* `xxx | lpr`:可以发送到打印机

### 其他实用工具

* `echo`:复制其后跟的任何内容
* `date`:显示时间和日期
* `script`:记录shell会话 -a文件名
* `unix2dos`:Linux文件转Windows/Macintosh 属于fotrodos软件包，sudo aptitude install tofrodos -dos2unix

### 压缩和归档

* `bzip2`:压缩文件
* `ls -l`:显示详细信息
* -v:显示节省空间
* .bz2:扩展名
* `bunzip2`:解压
* `gzip`and`compress`:压缩
* `tar`:归档
  * -c创建
  * -v包含详细信息
  * -f从一个文件进行读写
  * -t显示
  * -x解包
  

