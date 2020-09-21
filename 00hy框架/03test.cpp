#include "__hy__.h"

#define START int main(int argc, char *argv[], char *envp[])

// class CGirl
// {
// public:
//     char girlname[301];
//     int girlage;
//     char *girlptr;

//     CGirl()
//     {
//         printf("constructor.\n");
//         girlptr = 0;
//     }
//    ~CGirl()
//     {
//         printf("destructor.\n");
//         _free_();
//     }
//     void _malloc_(int size)
//     {
//         if (girlptr != 0)
//         {
//             delete girlptr;
//             girlptr = 0;
//         }
//         girlptr = new char[size];
//     }
//     void _free_()
//     {
//         printf("_free_().\n");
//         if (girlptr != 0)
//         {
//             delete girlptr;
//             girlptr = 0;
//         }
//     }
// };
class CGirl
{
public:
    char m_name[50];
    int m_age;
    int m_height;
    char m_sc[30];
    char m_yz[30];

    int Show()
    {
        printf("姓名：%s，年龄：%d，身高：%d，身材：%s，颜值：%s\n",m_name,m_age,m_height,m_sc,m_yz);
        return 0;
    }
};
class CKCon:public CGirl
{
public:
    char m_ch[50];
    char m_palace[50];
    int m_sal;

    // int Show()
    // {
    //     printf("姓名：%s，称号：%s，栖：%s，奉禄：%d两银子。\n",m_name,m_ch,m_palace,m_sal);
    //     return 0;
    // }
};
class CDad
{
public:
    char name[301];
    int age;
private:
    int sal;
public:
    virtual void show() = 0;
    // {
    //     printf("1. name       : %s\n", name);
    //     printf("2. age        : %d\n", age);
    //     printf("3. salary     : %d\n", sal);
    // }
};
class CSon:public CDad
{
public:
    char university[301];
    char major[301];
    int total_score;

    // void show()
    // {
    //     printf("1. name       : %s\n", name);
    //     printf("2. age        : %d\n", age);
    //     // printf("3. salary     : %d\n", sal);
    //     printf("3. university : %s\n", university);
    //     printf("4. major      : %s\n", major);
    //     printf("5. total score: %d\n", total_score);
    // }
};

START
{
    return 0;
}
    // for (int ii = 0; ii < 999999999; ii++)
    // {
    //     int *iptr = new int;
    //     delete (iptr);
    // }


    // CGirl girl;

    // girl._malloc_(999);
    // strcpy(girl.girlptr, "www.freecplus.net");
    // girl._free_();


    // CGirl *girl = new CGirl;
    // delete girl;


    // CKCon KCon;

    // strcpy(KCon.m_name,"杨玉环");
    // KCon.m_age=28;     
    // KCon.m_height=168;
    // strcpy(KCon.m_sc,"火辣");
    // strcpy(KCon.m_yz,"漂亮");
    // strcpy(KCon.m_ch,"杨贵妃");
    // strcpy(KCon.m_palace,"华清宫");
    // KCon.m_sal=10000;

    // KCon.Show();


    // CDad dad;
    // CSon son;

    // son.age = 22;
    // strcpy(son.name, "heyan");


    // CSon son;
    // strcpy(son.name, "何岩");
    // son.age = 22;
    // strcpy(son.university, "北京邮电大学");
    // strcpy(son.major, "电子信息");
    // son.total_score = 343;
    // CDad *ptr = 0;      // 父类指针
    // CSon *ptr2 = 0;     // 子类指针
    // ptr = ptr2 = &son;  // 都指向son对象
    // ptr->show();
    // ptr2->show();