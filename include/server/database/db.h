#ifndef DB_H
#define DB_H

#include <muduo/base/Logging.h>
#include <mysql/mysql.h>
#include <string>
using namespace std;

//数据库配置信息
static string server = "192.168.8.129";
static string user = "root";
static string password = "123456";
static string dbname = "chat";

//数据库操作类
class MySQL
{
private:
    MYSQL *_conn;
public:
    //初始化数据库连接
    MySQL();
    
    //释放数据库连接资源
    ~MySQL();
    
    //连接数据库
    bool connect();
    
    //更新操作
    bool update(string sql);
    
    //查询操作
    MYSQL_RES* query(string sql);

    //获取连接
    MYSQL* getConnection();
    
};


# endif