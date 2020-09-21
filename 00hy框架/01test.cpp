#include "__hy__.h"

// using namespace std;

// 因此，有必要定义默认构造函数，如下：
class CStudent_card
{
public:
    CStudent_card();
   ~CStudent_card();
    char stuname[301];
    char stunumber[301];
    char stuclasses[301];
    char hint[301];
    char hints[301];
    char hintss[301];
    char hintsss[301];

    int show();
    bool operator==(const CStudent_card &stu);
    bool operator!=(const CStudent_card &stu);
};

// void AddOne(int &rx)
// {
//     rx++;
// }
// void Set1998(int &rii)
// {
//     rii = 1998;
// }
// void Set1998(double &rdd)
// {
//     rdd = 1998;
// }
// void func(int *a) // a是一个指针变量
// {
//     *a=20;
// }
// void func(int &ra) // ra是一个引用
// {
//     ra=30;
// }

// int value;  // 定义一个全局变量。

// int fun1(int ii) // 函数的返回值是int
// {
//     value = 10 + ii;

//     return value;
// }
// int &fun2(int ii) // 函数的返回值是int引用
// {
//     value = 20 + ii;

//     return value;
// }
int main(int argc, char *argv[], char *envp[])
{
    printf("\n\n\n\n\n");
    return 0;
}
CStudent_card::CStudent_card()
{
    bzero(stuname, sizeof(stuname));
    bzero(stunumber, sizeof(stunumber));
    bzero(stuclasses, sizeof(stuclasses));
    bzero(hint, sizeof(hint));
    strcpy(hint, "本卡只限本人使用，不得转让他人，否则造成损失由本人负责");
    bzero(hints, sizeof(hints));
    strcpy(hints, "本卡在使用期间，如损坏、遗失请及时到有关部门办理相应手续");
    bzero(hintss, sizeof(hintss));
    strcpy(hintss, "勿将此卡弯曲、打孔折叠及接触高温，并保持卡面光洁");
    bzero(hintsss, sizeof(hintsss));
    strcpy(hintsss, "因此卡成本较高，请务必妥善保管");
}
int CStudent_card::show()
{
    printf("\t\t\t\t  姓名：%s\n\n", stuname);
    printf("\t\t\t\t  学号：%s\n\n", stunumber);
    printf("\t\t\t\t  班级：%s\n\n\n", stuclasses);
    printf("·%s。\n", hint);
    printf("·%s。\n", hints);
    printf("·%s。\n", hintss);
    printf("·%s。", hintsss);

    return 0;
}
bool CStudent_card::operator==(const CStudent_card &stu)
{
    if (00 == strcmp(stunumber, stu.stunumber))
    {
        return true;
    }

    return false;
}
bool CStudent_card::operator!=(const CStudent_card &stu)
{
    if (00 != strcmp(stunumber, stu.stunumber))
    {
        return true;
    }

    return false;
}
CStudent_card::~CStudent_card()
{
    ;
}
// int &CStudent_card::ShowStuAge()
// {
//     return stuage;
// }
    // int ii;
    // int &rii = ii;

    // printf("ii = %d, rii = %d.\n", ii, rii);
    // printf("addr of ii = %p, addr of rii = %p.\n", &ii, &rii);


    // CStudent_card stu1;
    // CStudent_card &heyan = stu1;

    // strcpy(stu1.stuname, "何岩");
    // strcpy(heyan.stunumber, "05168224");
    // strcpy(stu1.stuclasses, "通工1601");

    // heyan.show();


    // int number[301];
    // bzero(number, sizeof(number));
    // int * &rii = number;
    // int jj = 23;
    // int &rii = jj;

    // for (int i = 0; i < 301; i++)
    // {
    //     rii[i]= i;
    // }
    // for (int j = 0; j < 300; j++)
    // {
    //     printf("%d\n", number[j]);
    // }
    // printf("number[300] = %d, rii = %d.\n", number[300], rii);
    // rii++;
    // printf("number[300] = %d, rii = %d.\n", number[300], rii);
    // printf("&number[300] = %p, &rii = %p.\n", &number[300], &rii);
    // printf("ii = %d, rii = %d\n", ii, rii);
    // printf("&ii = %p, &rii = %p\n", &ii, &rii);


    // int ii = 22;
    // const int &rii = ii;

    // ii++;


    // int ii = -1;
    // int &rii = ii;

    // AddOne(rii);

    // printf("ii = %d, rii = %d\n", ii, rii);
    // int x = 0;
    // int &rx = x;
    // Set1998(rx);
    // printf("x = %d, rx = %d\n", x, rx);

    // double y = 0;
    // double &ry = y;
    // Set1998(ry);
    // printf("y = %lf, ry = %lf\n", y, ry);


    // int ii=0;

    // func(&ii);  // 传递变量的地址--->20
    // printf("1 ii=%d\n",ii);

    // func(ii);   // 引用--->int &ra = ii--->30
    // printf("2 ii=%d\n",ii);


    // int aa=fun1(10);
    // printf("aa=%d\n",aa);
    // // value = 20;
    // // aa = 20;

    // // int &bb=fun1(10);
    // // printf("bb=%d\n",bb);
    // int cc=fun2(20);
    // // value = 40;
    // printf("cc=%d\n",cc);
    // // cc = 40;

    // int &dd=fun2(20);
    // // value = 40;
    // printf("dd=%d\n",dd);
    // // dd =40;


    // CStudent_card stu;

    // int &age = stu.ShowStuAge();
    // age = 1998;

    // int agge = stu.ShowStuAge();
    // printf("age = %d.\n", agge);


    // CStudent_card stu;
    // CStudent_card stu2;
    // CStudent_card stu3;

    // strcpy(stu.stunumber, "05168224");
    // strcpy(stu2.stunumber, "05168224");
    // strcpy(stu3.stunumber, "05168225");

    // if (stu == stu2)
    // {
    //     printf("\"05168224\" and \"05168224\" refers to only one person.\n");
    // }
    // else
    // {
    //     printf("\"05168224\" and \"05168224\" refers to two different persons.\n");
    // }
    // if (stu.operator!=(stu3))
    // {
    //     printf("\"05168224\" and \"05168225\" refers to two different persons.\n");
    // }
    // else
    // {
    //     printf("\"05168224\" and \"05168225\" refers to only one person.\n");
    // }


    // char str[301];
    // memset(str, 0, sizeof(str));
    // strcpy(str, "西施");

    // std::string str2;
    // str2 = "沉鱼落雁";
    // str2 = str2 + "，闭月羞花";

    // printf("=%s=\n", str);
    // // 西施
    // printf("=%s=\n", str2.c_str());
    // // 沉鱼落雁
    // strcpy(str, str2.c_str());
    // printf("=%s=\n", str);
    // // 沉鱼落雁
    // if (str == str2)
    // {
    //     printf("%s==%s\n", str, str2.c_str());
    // }


    // std::string str;
    // std::string str2;

    // str = "123456789";
    // printf("size = %lu\n", str.size());  // 10???
    // printf("length = %lu\n", str.length());  // 9
    // str.clear();
    // printf("=%s=\n", str.c_str());  // ==