# C
C study plan


## Sublime Text在Mac下配置C语言编译
1. 命令行安装gcc
```
brew install gcc
```
2. 工具栏打开Tools->Build System->New Build System，在新建的文件中输入以下内容：
```
{  
"cmd": ["gcc", "${file}", "-o", "${file_path}/${file_base_name}"],  
"file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",  
"working_dir": "${file_path}",  
"selector": "source.c, source.c++",  
   
"variants":  
[  
{  
"name": "Run",  
"cmd" : ["${file_path}/${file_base_name}"]  
}  
]  
}
```
3. 快捷键：cmd+b(编译)，shift+cmd+b(运行)