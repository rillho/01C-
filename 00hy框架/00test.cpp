#include "__hy__.h"

// struct GIRL_STRU
// {
//     char name[50];        /* 姓名 */
//     int  age;             /* 年龄 */
//     int  height;          /* 身高，单位：厘米cm */
//     char stature[30];     /* 身材，火辣；普通；飞机场。 */
//     char facescore[30];   /* 颜值，漂亮；一般；歪瓜裂枣。 */
//     int  show();          /* 声明结构体成员函数show，用于显示其它成员变量的值。 */
// };
class CStudent_card
{
public:
    CStudent_card();
   ~CStudent_card();

    char stuname[301];
    char stunumber[301];
    char stuclasses[301];
private:
    char stuhint[301];
    char stuhints[301];
public:
    int stushow();
};
// class GIRL_CLASS
// {
// public:
//     char name[50];        /* 姓名 */
//     int  age;             /* 年龄 */
//     int  height;          /* 身高，单位：厘米cm */
//     char stature[30];     /* 身材，火辣；普通；飞机场。 */
//     char facescore[30];   /* 颜值，漂亮；一般；歪瓜裂枣。 */
//     int  show();          /* 声明结构体成员函数show，用于显示其它成员变量的值。 */
// };

// int FindMax(int a, int b);
// void FindMax(int a, int b);
int main(int argc, char *argv[], char *envp[])
{
    char str[301];

    myprintf("=%s%d%s%d=\n", "05", 16, "82", 24);

    bzero(str, sizeof(str));
    mysprintf(str, "%s%d%s%d", "05", 16, "82", 24);
    myprintf("=%s=\n", str);

    bzero(str, sizeof(str));
    mysnprintf(str, 9, "0516822405168224");
    myprintf("=%s=\n", str);

    printf("\n\n\n\n\n");
    return 0;
}
// int GIRL_CLASS::show()
// {
//     printf("name: %s   age: %d   height: %d   stature: %s   facescore: %s\n",\
//                   name,\
//                             age,\
//                                          height,\
//                                                        stature,\
//                                                                        facescore);

//     return 0;
// }
int CStudent_card::stushow()
{
    printf("\t\t姓名：%s\n\n", stuname);
    printf("\t\t学号：%s\n\n", stunumber);
    printf("\t\t班级：%s\n\n", stuclasses);
    printf("🕛%s。\n", stuhint);
    printf("🕛%s。", stuhints);

    return 0;
}
CStudent_card::CStudent_card()
{
    bzero(stuname, sizeof(stuname));
    bzero(stunumber, sizeof(stunumber));
    bzero(stuclasses, sizeof(stuclasses));
    bzero(stuhint, sizeof(stuhint));
    strcpy(stuhint, "本卡只限本人使用，不得转让他人，否则造成损失由本人负责");
    bzero(stuhints, sizeof(stuhints));
    strcpy(stuhints, "本卡在使用期间，如损坏、遗失请及时到有关部门办理相应手续");
}
CStudent_card::~CStudent_card()
{
    ;
}
// int FindMax(int a, int b)
// {
//     return a > b ? a : b;
// }
// void FindMax(int a, int b)
// {
//     ;
// }
    // GIRL_CLASS girl;
    // // bzero(&girl, sizeof(class GIRL_CLASS));

    // strcpy(girl.name, "西施");
    // girl.age = 22;
    // girl.height = 168;
    // strcpy(girl.stature, "火辣");
    // strcpy(girl.facescore, "漂亮");

    // girl.show();


    // printf("%d\n", FindMax(3, 4));
    // FindMax(3, 4);


    // char str1[17];
    // char str2[17];

    // strcpy(str1, "www.freecplus.net");
    // printf("=%s=\n", str1);
    // SAFESTRCPY(str2, sizeof(str2), "www.freecplus.net");
    // printf("=%s=\n", str2);


    // CStudent_card stu;

    // strcpy(stu.stuname, "何岩");
    // strcpy(stu.stunumber, "05168224");
    // strcpy(stu.stuclasses, "通工1601");

    // printf("=%s=\n", stu.stuhint);
    // stu.stushow();