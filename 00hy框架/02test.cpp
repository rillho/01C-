#include "__hy__.h"

// struct GIRL_STRU
// {
//     char girlname[301];
//     int girlage;
// };
// struct STUDENT_STRU
// {
//     char stuname[301];
//     int stuscore;
// };
class CRand
{
public:
    std::vector<int> vrand;  // 用于存放生成好的随机数
    CRand()
    {
        ;
    }
   ~CRand()
    {
        vrand.clear();
    }
    
    // 随机数的种子不能只用time(0)的秒，还可以利用微秒，同一秒内取到的随机数将不同。
    // 生成指定范围的随机数，
        // minvalue是最小值，
        // maxvalue是最大值，
        // brep是否允许重复。
    void GetRandNumber(const int min_value, const int max_value, const int total_count, const bool brep = true)
    {
        if (total_count < 0)
        {
            return;
        }
        if (brep == false)
        {
            if (total_count > max_value - min_value + 1)
            {
                return;
            }
        }
        if (brep)
        {
            // 重复
            struct timeval st;
            bzero(&st, sizeof(st));
            gettimeofday(&st, 0);
            srand(st.tv_sec * 1000000 + st.tv_usec);
            for (int ii = 0; ii < total_count; ii++)
            {
                vrand.push_back(rand() % (max_value - min_value + 1) + min_value);
            }
        }
        else
        {
            // 不重复
            struct timeval st;
            bzero(&st, sizeof(st));
            gettimeofday(&st, 0);
            srand(st.tv_sec * 1000000 + st.tv_usec);
            for (int ii = 0; ii < total_count; ii++)
            {
A:
                int tmp = rand() % (max_value - min_value + 1) + min_value;
                for (int jj = 0; jj < vrand.size(); jj++)
                {
                    if (vrand[jj] == tmp)
                    {
                        goto A;
                    }
                }
                vrand.push_back(tmp);
            }
        }
    }
};
class CGirl
{
public:
    char *pointer;

    CGirl()
    {

            pointer = 0;

    }
   ~CGirl()
    {
        _free_();
    }
    void _malloc_(int size)
    {
        if (pointer != 0)
        {
            delete pointer;
            pointer = 0;
        }
        pointer = new char[size];
    }
    void _free_()
    {
        if (pointer != 0)
        {
            delete pointer;
            pointer = 0;
        }
    }
};
// bool SortByScore(const STUDENT_STRU &stu1, const STUDENT_STRU &stu2);
// bool SortByScore2(const STUDENT_STRU &stu1, const STUDENT_STRU &stu2);

int main(int argc, char *argv[], char *envp[])
{
    printf("\n\n\n\n\n");
    return 0;
}

// bool SortByScore(const STUDENT_STRU &stu1, const STUDENT_STRU &stu2)
// {
//     if (stu1.stuscore < stu2.stuscore)
//     {
//         return true;
//     }

//     return false;
// }
// bool SortByScore2(const STUDENT_STRU &stu1, const STUDENT_STRU &stu2)
// {
//     if (stu1.stuscore > stu2.stuscore)
//     {
//         return true;
//     }

//     return false;
// }
    // std::vector<int> vi;
    // std::vector<double> vd;
    // std::vector<std::string> vstr;
    // std::vector<GIRL_STRU> vCGirl;


    // int height = 0;
    // std::vector<int> vheight;
    // while (true)
    // {
    //     printf("input height (0 - end): ");
    //     scanf("%d", &height);
    //     if (0 != height)
    //     {
    //         vheight.push_back(height);
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }

    // for (int ii = 0; ii < vheight.size(); ii++)
    // {
    //     printf(", %d" + !ii, vheight[ii]);
    // }

    // sort(vheight.begin(), vheight.end());
    // printf("\n");

    // for (int ii = 0; ii < vheight.size(); ii++)
    // {
    //     printf(", %d" + !ii, vheight[ii]);
    // }


    // char str[301];
    // std::string strtmp;
    // std::vector<std::string> vstr;
    // while (true)
    // {
    //     printf("input beauty's name (0 - end): ");
    //     memset(str, 0, sizeof(str));
    //     scanf("%s", str);
    //     strtmp = str;
    //     if (strtmp == "0")
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         vstr.push_back(str);
    //     }
    // }

    // for (int ii = 0; ii < vstr.size(); ii++)
    // {
    //     printf("=%s=\n", vstr[ii].c_str());
    // }

    // sort(vstr.begin(), vstr.end());
    // printf("\n");

    // for (int ii = 0; ii < vstr.size(); ii++)
    // {
    //     printf("=%s=\n", vstr[ii].c_str());
    // }


    // std::vector<int> vi;

    // for (int ii = 0; ii < 10; ii++)
    // {
    //     vi.push_back(ii);
    // }
    // vi[0] = 0;
    // vi[1] = 1;
    // vi[2] = 2;
    // vi[3] = 3;
    // vi[4] = 4;
    // vi[5] = 5;
    // vi[6] = 6;
    // vi[7] = 1998;
    // vi[7 + 1] = 7; --- 8th
    // vi[8 + 1] = 8;
    // vi[9 + 1] = 9;

    // printf("begins at %p, ends at %p.\n", vi.begin(), vi.end());
    // for (int ii = 0; ii < vi.size(); ii++)
    // {
    //     printf(",%d" + !ii, vi[ii]);
    // }
    // printf("\n");
    // vi.insert(vi.begin() + 7, 1998);
    // for (int ii = 0; ii < vi.size(); ii++)
    // {
    //     printf(",%d" + !ii, vi[ii]);
    // }
    // printf("\n");
    // vi.insert(vi.end() - 3, 1998);
    // for (int ii = 0; ii < vi.size(); ii++)
    // {
    //     printf(",%d" + !ii, vi[ii]);
    // }
    // printf("\n");
    // vi.erase(vi.end() - 4);
    // for (int ii = 0; ii < vi.size(); ii++)
    // {
    //     printf(",%d" + !ii, vi[ii]);
    // }
    // printf("\n");
    // vi.pop_back();
    // for (int ii = 0; ii < vi.size(); ii++)
    // {
    //     printf(",%d" + !ii, vi[ii]);
    // }
    // printf("\n");
    // vi.clear();
    // for (int ii = 0; ii < vi.size(); ii++)
    // {
    //     printf(",%d" + !ii, vi[ii]);
    // }
    // printf("\n");


    // std::vector<STUDENT_STRU> vstu;
    // STUDENT_STRU stu_tmp;
    // while (true)
    // {
    //     memset(&stu_tmp, 0, sizeof(stu_tmp));
    //     printf("input name (0 - end): ");
    //     scanf("%s", stu_tmp.stuname);
    //     if (0 == strcmp(stu_tmp.stuname, "0"))
    //     {
    //         break;
    //     }
    //     printf("input his or her score: ");
    //     scanf("%d", &stu_tmp.stuscore);
    //     vstu.push_back(stu_tmp);
    // }

    // for (int ii = 0; ii < vstu.size(); ii++)
    // {
    //     printf("%s: %d\n", vstu[ii].stuname, vstu[ii].stuscore);
    // }

    // sort(vstu.begin(), vstu.end(), SortByScore2);
    // printf("\n");

    // for (int ii = 0; ii < vstu.size(); ii++)
    // {
    //     printf("%s: %d\n", vstu[ii].stuname, vstu[ii].stuscore);
    // }


    // std::vector<int> vi(10, 1998);
    // printf("size of \"std::vector<int> vi(10)\" is %lu.\n", vi.size());
    // vi[0] = 1;
    // vi[1] = 2;
    // vi[2] = 3;
    // vi[3] = 4;
    // vi[4] = 5;
    // vi[5] = 6;
    // vi[6] = 7;
    // vi[7] = 8;
    // vi[8] = 9;
    // vi[9] = 10;
    // for (int ii = 0; ii < 10; ii++)
    // {
    //     printf(",%d" + !ii, vi[ii]);
    // }


    // printf("\n\n*----------------------------------------------------");
    // printf("\n* Welcome to \"Fight the Landlord Lite\"");
    // printf("\n*----------------------------------------------------");
    // printf("\n\n\t--- 欢乐斗地主 ---\n");
    // CRand ftll;
    // ftll.GetRandNumber(1, 52, 52, false);
    // printf("\n何红卫：");
    // for (int ii = 0; ii < 13; ii++)
    // {
    //     printf("%3d", ftll.vrand[ii]);
    // }
    // printf("\n\n何  岩：");
    // for (int ii = 13; ii < 26; ii++)
    // {
    //     printf("%3d", ftll.vrand[ii]);
    // }
    // printf("\n\n尚红星：");
    // for (int ii = 26; ii < 39; ii++)
    // {
    //     printf("%3d", ftll.vrand[ii]);
    // }
    // printf("\n\n匿  名：");
    // for (int ii = 39; ii < 52; ii++)
    // {
    //     printf("%3d", ftll.vrand[ii]);
    // }


    // CRand test;
    // test.GetRandNumber(-10, -7, 10, false);
    // for (int ii = 0; ii < test.vrand.size(); ii++)
    // {
    //     printf(",%d" + !ii, test.vrand[ii]);
    // }


    // char *pointer = new char[301];

    // memset(pointer, 0, 301);
    // strcpy(pointer, "www.freecplus.net");

    // printf("=%s=", pointer);
    // delete pointer;


    // CGirl *pointer = new CGirl;
    // delete pointer;
