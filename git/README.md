## git-practize-as-art

1. Git Init

``` git
git init
```

初始化一个 Git 仓库

2. Git Remote

``` git
git remote -v
```

康康有关联了几个远程仓库

``` git
git remote add origin-name link
```

添加一个远程仓库

3. Git Pull

``` git
git pull origin master:master
```

从远程主机拉取远程分支到本地分支

git pull <远程主机> <远程分支>:<本地分支>

4. Git Push

``` git
git push origin master:master
```

从本地分支推送远程主机到远程分支

git push <远程主机> <本地分支>:<远程分支>
 
本地分支不存在等同于删除远程分支

5. Git Branch

``` git
git branch branch_name
```

创建一个本地分支

``` git
git branch -d branch_name
```

删除一个本地分支

6. Git Checkout

``` git
git Checkout branch_name
```

切换本地分支

