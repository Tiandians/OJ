# 学习Linux的笔记

参考书籍：《Ubuntu Linux》指南 基础篇

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

* `info`：显示实用工具的相关信息，是 GNU 项目开发的基于菜单的超文本系统。
  * h：查看有关 info 的交互手册
  * ?：列出 info 命令
  * SPACE：滚动浏览可用信息项菜单
  * m：后面跟着希望显示的菜单的名称，或者跟一个空格以显示菜单列表
  * q 或者 CONTROL-C：退出
  * 行左端的`*`号说明该条目是菜单项。
  * 每一个菜单项都是一个指向描述该项目的 info 页的链接
* 在 `help.ubuntu.com` 上可以找到 [Ubuntu](help.ubuntu.con) 文档
* 在 `www.gnu.org/manual` 上可以找到 [GUN手册](www.gnu.org/manual)

### 口令

  * 7 或 8 个字符是长度和安全两方面都比较好的折中

  * 不应该是任何语言的字典中的某个词汇

  * 不应该是人名、地名、宠物名字或其他东西的名称

  * 应该至少包含 2 个字母和 1 个数字或标点符号字符

  * 不应该是你的用户名及其变形

  * 避免使用控制字符，这可能导致你无法登陆

  * 如果忘记口令，请以 root 特权身份的用户修改你的口令

    ### Linux CLI

    * CLI：命令行（字符）界面
    * 