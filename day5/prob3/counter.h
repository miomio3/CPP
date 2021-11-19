#ifndef _COUNTER_H_
#define _COUNTER_H_
 
class Counter{
private:
    //  回数
    static int m_count;
	int	num;
public:

	Counter();
    //  リセット
    void reset();
    //  カウント
    void count();
    //  カウントの数
    int getCount();
	static int getTotalCount();

};
 
#endif // _COUNTER_H_