# 编译过程
New-Item -Path build -ItemType Directory
Set-Location -Path build
cmake -G "MinGW Makefiles" ..
mingw32-make
Set-Location -Path ..
# 清空过程
Remove-Item -Path bin\*.dll.a
Remove-Item -Path build -Recurse