# [Learn Git Branching](https://learngitbranching.js.org)

## 基础篇

### 提交

git commit

### 分支

git branch <分支名>创建分支

git checkout <分支名>切换分支

git checkout -b \<your-branch-name>创建并切换

### 合并

git merge <分支名>将指定分支合并到当前分支，合并后的节点有两个父节点

git rebase <分支名>将当前分支移至指定分支树的顶端，指定分支未合并，需要切换到指定分支再次rebase

## 高级篇

### 移动

HEAD:是一个对当前检出记录的符号引用，指向你正在其基础上进行工作的提交记录。总是指向当前分支上最近一次提交记录。HEAD通常指向分支名。

HEAD一般指向master，或者其他

### 分离

分离HEAD就是让其指向某个具体的提交记录而不是分支名

git checkout <标签名>会让HEAD指向指定的提交记录

