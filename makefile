# 设置编译器
CC = gcc
# # 设置编译选项
CFLAGS = -Wall -g
LDFLAGS = 
#  
#  # 源文件
SOURCES = $(wildcard *.c)
# 目标文件
OBJECTS = $(SOURCES:.c=.o)
# # 最终可执行文件
EXECUTABLE = myprogram
SingleExec = $(SOURCES:.c=)
#  
#  # 默认目标
all: $(EXECUTABLE)
 
# 可执行文件规则
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

# 依赖规则
.c.o: 
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
 
# 清理规则
clean:
	rm -f $(EXECUTABLE) $(OBJECTS) $(SingleExec)
