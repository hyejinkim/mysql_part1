MYSQL_CONCPP_DIR = /usr/local/mysql-connector-c++
CPPFLAGS = -I $(MYSQL_CONCPP_DIR)/include -L $(MYSQL_CONCPP_DIR)/lib64
LDLIBS= -lmysqlcppconn8
CXX = clang++ -stdlib=libc++
CXXFLAGS = -std=c++11
app: main.cpp
	g++ -std=c++11 -I $(MYSQL_CONCPP_DIR)/include -L $(MYSQL_CONCPP_DIR)/lib64 main.cpp -lmysqlcppconn8 -o app
