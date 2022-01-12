//用 正确 的 golf 类 声明 替换 那里 的 代码。 
//用带 合适 参数 的 构造 函数 替换
// setgolf（ golf &, const char *, int）， 
// 以 提供 初始 值。 保留 setgolf( )的 交互 版本， 
// 但要 用 构造 函数 来 实现 它（ 例如， setgolf( )的 代码 应该 获得 数据，
// 将 数据 传递 给 构造 函数 来 创建 一个 临时 对象， 
//  并 将其 赋 给 调用 对象， 即* this）。
#ifndef TTTHREE_H_
#define TTTHREE_H_

class Golf
{
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;
public:
    Golf(const char* name = "\0", int hc = 0);
    ~Golf(); 
    void setgolf();
    void resethandicap(int hc);//reset handicap
    void showgolf() const;
};

#endif