#include "common.h"

/*
#include "./786_K-th_smallest_prime_fraction.h"
void test()
{

    // int m[] = {1, 2, 3, 5};

    // int m[] = {1, 3, 5, 7, 11, 13, 19};

    int m[] = {1,2029,3209,3517,3823,4933,8209,8893,12763,12799,14197,14387,18973,19207,23747,24547,24953,25247,25763,27043};

    int l = LEN_M(m);

    int rs;
    for (int i = 0; i < l * (l - 1) / 2; i ++)
        out(kthSmallestPrimeFraction(m, LEN_M(m), i + 1, &rs), 2);
}

#include "./867_prime_palindrome.h"
void test()
{

    // for (int i = 1; i < 1000; i ++)
    //     printf("%d : %d , ", i, primePalindrome(i));

    // int x = 11;
    // for (int i = 1; i < 1000; i ++)
    // {
    //     int ox = x;
    //     x = primePalindrome(ox);
    //     printf("%d : %d , ", ox, x);
    // }

    printf("%d .\n", primePalindrome(11));
    printf("%d .\n", primePalindrome(13));
    printf("%d .\n", primePalindrome(1));
    printf("%d .\n", primePalindrome(2));
    printf("%d .\n", primePalindrome(3));
    printf("%d .\n", primePalindrome(4));
    printf("%d .\n", primePalindrome(5));
    printf("%d .\n", primePalindrome(6));
    printf("%d .\n", primePalindrome(7));
    printf("%d .\n", primePalindrome(8));
    printf("%d .\n", primePalindrome(9));
    printf("%d .\n", primePalindrome(10));
    printf("%d .\n", primePalindrome(101));
    printf("%d .\n", primePalindrome(1001));

    printf("%d .\n", primePalindrome(9015110));
}

#include "866_smallest_subtree_with_all_the_deepest_nodes.h"
void test()
{
    // int m[] = {3, 5, 1, 6, 2, 7, 8, 0, 0, 0, 4, 7, 6, 9};
    int m[] = {1, 2, 3, 4};
    struct TreeNode* r = gen_tree(m, LEN_M(m));

    struct TreeNode* t = subtreeWithAllDeepest(r);
    outTree(t);
}

#include "./847_shortest_path_visiting_all_nodes.h"
void test()
{

    // int m1[] = {1, 2, 3};
    // int m2[] = {0};
    // int m3[] = {0};
    // int m4[] = {0};

    // int m1[] = {1};
    // int m2[] = {0, 2, 4};
    // int m3[] = {1, 3, 4};
    // int m4[] = {2};
    // int m5[] = {1, 2};


    int m1[] = {1,2,3,4,5,6,7,8,9,10,11};
    int m2[] = {0,2,3,4,5,6,7,8,9,10,11};
    int m3[] = {0,1,3,4,5,6,7,8,9,10,11};
    int m4[] = {0,1,2,4,5,6,7,8,9,10,11};
    int m5[] = {0,1,2,3,5,6,7,8,9,10,11};
    int m6[] = {0,1,2,3,4,6,7,8,9,10,11};
    int m7[] = {0,1,2,3,4,5,7,8,9,10,11};
    int m8[] = {0,1,2,3,4,5,6,8,9,10,11};
    int m9[] = {0,1,2,3,4,5,6,7,9,10,11};
    int m10[] = {0,1,2,3,4,5,6,7,8,10,11};
    int m11[] = {0,1,2,3,4,5,6,7,8,9,11};
    int m12 [] = {0,1,2,3,4,5,6,7,8,9,10};

    int l1 = LEN_M(m1);
    int l2 = LEN_M(m2);
    int l3 = LEN_M(m3);
    int l4 = LEN_M(m4);
    int l5 = LEN_M(m5);
    int l6 = LEN_M(m6);
    int l7 = LEN_M(m7);
    int l8 = LEN_M(m8);
    int l9 = LEN_M(m9);
    int l10 = LEN_M(m10);
    int l11 = LEN_M(m11);
    int l12 = LEN_M(m12);

    int* ms[] = {m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12};
    int ls[] = {l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12};

    int l = LEN_M(ms);
    printf("%d.\n", shortestPathLength(ms, l, ls));

}

#include "./865_shortest_path_to_get_all_keys.h"
void test()
{

    // char* m[] = {"..#....##.","....d.#.D#","#...#.c...","..##.#..a.","...#....##","#....b....",".#..#.....","..........",".#..##..A.",".B..C.#..@"}; // 19

    // char* m[] = { // 33
    //     ".....#..##.....",
    //     "#..#..#.....#..",
    //     "....#...#..#...",
    //     "...#...#......a",
    //     "...#.....###.#.",
    //     "..###..#....#.#",
    //     "..##........#..",
    //     ".b.....@.......",
    //     "..#.........#..",
    //     ".....#.....#.#.",
    //     "C.#..#.....#.##",
    //     "...#.#....B...#",
    //     ".....c....#..#.",
    //     ".##...#........",
    //     "A.........#...."
    // };

    // char* m[] = {"@.a.#", "###.#", "b.A.B"}; // 8

    // char* m[] = {"@..aA", "..B#.", "....b"}; // 6

    // char* m[] = {"@aA"};

    // char* m[] = {
    //     "Dd#b@",
    //     ".fE.e",
    //     "##.B.",
    //     "#.cA.",
    //     "aF.#C"
    // }; // 14

    // char* m[] = {".#..................",
    //              "......#..#..........",
    //              ".#B#.#..#...........",
    //              "##...D.#............",
    //              ".#.......#..........",
    //              "##.....a............",
    //              "...C.#...#..........",
    //              "A...#.e.E#..........",
    //              "c.@..#...d..........",
    //              "#..#.#.b.#.........."}; // 21

    // char* m[] = {"###.D.B.F.",
    //              "..#b......",
    //              "##....#..#",
    //              "....@..#..",
    //              "#d.AE.##c#",
    //              ".....##.f.",
    //              "#........C",
    //              "..a#.#....",
    //              "#....#e..#",
    //              "........##"}; // 25

    // char* m[] ={
    //     "@.......A..#",
    //     "#.#.....#b.#",
    //     "#.#...c.##B#",
    //     "#.########C#",
    //     "#a###D..d..#",
    // }; // 28

    char* m[] = {
        "..Ff..#..e.#...",
        ".....#.##...#..",
        "....#.#...#....",
        "##.......##...#",
        "...@#.##....#..",
        "#........b.....",
        "..#...#.....##.",
        ".#....#E...#...",
        "......A.#D.#...",
        "...#...#..#....",
        "...a.#B#.......",
        ".......c.....#.",
        "....#...C#...#.",
        "##.#.....d..#..",
        ".#..#......#..."
    };

    int l = LEN_M(m);
    printf("%d.\n", shortestPathAllKeys(m, l));
}

#include "./641_design_circular_deque.h"
void test()
{
    MyCircularDeque* m = myCircularDequeCreate(4);
    printf("%d.\n", myCircularDequeInsertFront(m, 9));
    printf("%d.\n", myCircularDequeDeleteLast(m));
    printf("%d.\n", myCircularDequeGetRear(m));
    printf("%d.\n", myCircularDequeGetFront(m));
    printf("%d.\n", myCircularDequeGetFront(m));

    // MyCircularDeque* m = myCircularDequeCreate(3);
    // printf("%d.\n", myCircularDequeInsertLast(m, 5));
    // printf("%d.\n", myCircularDequeInsertLast(m, 6));
    // printf("%d.\n", myCircularDequeInsertLast(m, 7));
    // printf("%d.\n", myCircularDequeInsertLast(m, 4));
    // printf("%d.\n", myCircularDequeGetRear(m));
    // printf("%d.\n", myCircularDequeIsFull(m));
    // printf("%d.\n", myCircularDequeDeleteLast(m));
    // printf("%d.\n", myCircularDequeDeleteLast(m));
    // printf("%d.\n", myCircularDequeGetFront(m));
    // printf("%d.\n", myCircularDequeGetRear(m));
    // printf("%d.\n", myCircularDequeInsertFront(m, 4));
    // printf("%d.\n", myCircularDequeGetFront(m));
    // printf("%d.\n", myCircularDequeGetRear(m));
    // printf("%d.\n", myCircularDequeInsertFront(m, 1));
    // printf("%d.\n", myCircularDequeGetFront(m));
    // printf("%d.\n", myCircularDequeGetRear(m));
    // printf("%d.\n", myCircularDequeInsertFront(m, 1));
    // printf("%d.\n", myCircularDequeDeleteLast(m));
    // printf("%d.\n", myCircularDequeDeleteLast(m));
    // printf("%d.\n", myCircularDequeDeleteLast(m));
    // printf("%d.\n", myCircularDequeDeleteLast(m));
    // printf("%d.\n", myCircularDequeInsertFront(m, 6));
    // printf("%d.\n", myCircularDequeInsertFront(m, 7));
    // printf("%d.\n", myCircularDequeInsertFront(m, 4));
    // printf("%d.\n", myCircularDequeInsertFront(m, 9));
    // printf("%d.\n", myCircularDequeGetFront(m));
    // printf("%d.\n", myCircularDequeGetRear(m));

}

#include "./707_design_linked_list.h"
void test()
{

    // MyLinkedList* obj = myLinkedListCreate();
    // printf("%d.\n", myLinkedListGet(obj, 1));
    // myLinkedListAddAtHead(obj, 1);
    // myLinkedListAddAtTail(obj, 3);
    // myLinkedListAddAtIndex(obj, 1, 2);
    // printf("%d.\n", myLinkedListGet(obj, 0));
    // printf("%d.\n", myLinkedListGet(obj, 1));
    // printf("%d.\n", myLinkedListGet(obj, 2));
    // printf("%d.\n", myLinkedListGet(obj, 3));
    // myLinkedListDeleteAtIndex(obj, 0);
    // printf("%d.\n", myLinkedListGet(obj, 0));
    // printf("%d.\n", myLinkedListGet(obj, 1));
    // printf("%d.\n", myLinkedListGet(obj, 2));
    // myLinkedListFree(obj);



    // MyLinkedList* obj = myLinkedListCreate();
    // myLinkedListAddAtHead(obj, 0);
    // myLinkedListAddAtIndex(obj, 1, 9);
    // myLinkedListAddAtIndex(obj, 1, 5);
    // myLinkedListAddAtTail(obj, 7);
    // myLinkedListAddAtHead(obj, 1);
    // myLinkedListAddAtIndex(obj, 5, 8);
    // myLinkedListAddAtIndex(obj, 5, 2);
    // myLinkedListAddAtTail(obj, 1);
    // myLinkedListAddAtTail(obj, 0);
    // myLinkedListDeleteAtIndex(obj, 6);
    // printf("%d.\n", myLinkedListGet(obj, 0));
    // printf("%d.\n", myLinkedListGet(obj, 1));
    // printf("%d.\n", myLinkedListGet(obj, 2));
    // printf("%d.\n", myLinkedListGet(obj, 3));
    // printf("%d.\n", myLinkedListGet(obj, 4));
    // printf("%d.\n", myLinkedListGet(obj, 5));
    // printf("%d.\n", myLinkedListGet(obj, 6));
    // printf("%d.\n", myLinkedListGet(obj, 7));
    // printf("%d.\n", myLinkedListGet(obj, 8));
    // printf("%d.\n", myLinkedListGet(obj, 9));
    // // printf("%d.\n", myLinkedListGet(obj, 0));
    // // printf("%d.\n", myLinkedListGet(obj, 1));
    // // printf("%d.\n", myLinkedListGet(obj, 2));
    // myLinkedListFree(obj);


    char* m[] = {"addAtHead","get","addAtTail","deleteAtIndex","addAtHead","deleteAtIndex","get","addAtTail","addAtHead","addAtTail","addAtTail","addAtTail","addAtIndex","get","addAtIndex","addAtHead","deleteAtIndex","addAtIndex","addAtHead","addAtIndex","deleteAtIndex","get","addAtTail","deleteAtIndex","deleteAtIndex","addAtTail","addAtTail","addAtIndex","addAtHead","get","get","addAtTail","addAtTail","addAtTail","addAtTail","addAtIndex","addAtIndex","addAtHead","addAtIndex","addAtTail","addAtHead","addAtHead","addAtHead","addAtHead","addAtHead","addAtHead","addAtTail","addAtHead","deleteAtIndex","addAtHead","get","addAtHead","get","addAtHead","addAtHead","addAtHead","addAtIndex","deleteAtIndex","addAtTail","deleteAtIndex","get","addAtIndex","addAtHead","addAtTail","deleteAtIndex","addAtHead","addAtIndex","deleteAtIndex","deleteAtIndex","deleteAtIndex","addAtHead","addAtTail","addAtTail","addAtHead","addAtTail","addAtIndex","deleteAtIndex","deleteAtIndex","addAtIndex","addAtHead","addAtHead","addAtTail","get","addAtIndex","get","addAtHead","addAtHead","addAtHead","addAtIndex","addAtIndex","get","addAtHead","get","get","addAtTail","addAtHead","addAtHead","addAtTail","addAtTail","get","addAtTail"};
    int p[] = {8,1,81,2,26,2,1,24,15,0,13,1,6,33,6,2,91,82,6,4,11,3,7,14,1,6,99,11,7,5,92,7,92,57,2,6,39,51,3,22,5,26,9,52,69,5,58,79,7,41,33,88,44,8,72,93,18,1,9,46,9,92,71,69,11,54,27,83,12,20,19,97,77,36,3,35,16,68,22,36,17,62,89,61,6,92,28,69,23,28,7,4,0,24,52,1,23,3,7,6,68,79,45,90,41,52,28,25,9,32,11,90,24,98,36,34,26};

    MyLinkedList* obj = myLinkedListCreate();

    int j = 0;
    for (int i = 0; i < LEN_M(m); i ++)
    {
        char* s = m[i];
        if (!strcmp(s, "addAtHead"))
            myLinkedListAddAtHead(obj, p[j ++]);
        else if (!strcmp(s, "get"))
            printf("%d.\n", myLinkedListGet(obj, p[j ++]));
        else if (!strcmp(s, "addAtTail"))
            myLinkedListAddAtTail(obj, p[j ++]);
        else if (!strcmp(s, "deleteAtIndex"))
            myLinkedListDeleteAtIndex(obj, p[j ++]);
        else if (!strcmp(s, "addAtIndex"))
            myLinkedListAddAtIndex(obj, p[j ++], p[j ++]);
    }


}

#include "./426_convert_binary_search_tree_to_sorted_doubly_linked_list.h"
void test()
{

    // int m[] = {4, 2, 5, 1, 3};
    int m[] = {2, 1};

    struct TreeNode* r = gen_tree(m, LEN_M(m));
    outTree(r);

    struct TreeNode* s= NULL;
    struct TreeNode** ps= &s;
    struct TreeNode*** pps= &ps;
    struct TreeNode* e = NULL;
    struct TreeNode** pe= &e;
    struct TreeNode*** ppe= &pe;
    struct TreeNode* rs = NULL;
    struct TreeNode* re = NULL;
    struct TreeNode* t = NULL;
    _ttdl(r, pps, pe, &rs, &re);

    printf("%p %d %p %p.\n", s, s->val, s->left, s->right;)
    s = s->right;
    printf("%p %d %p %p.\n", s, s->val, s->left, s->right);
    s = s->right;
    // printf("%p %d %p %p.\n", s, s->val, s->left, s->right);
    // s = s->right;
    // printf("%p %d %p %p.\n", s, s->val, s->left, s->right);
    // s = s->right;
    // printf("%p %d %p %p.\n", s, s->val, s->left, s->right);

    printf("%p %p.\n", rs, re);

}

#include "./558_quad_tree_intersection.h"

#include "./868_binary_gap.h"
void test()
{
    for (int i = 0; i < 32; i ++)
        printf("%d %d.\n", i, binaryGap(i));
}

#include "./869_reordered_power_of_2.h"
void test()
{
    int n = 821;
    printf("%d %d.\n", n, reorderedPowerOf2(n));
}

#include "./870_advantage_shuffle.h"
void test()
{

    // int m[] = {2, 7, 11, 15};
    // int n[] = {1, 10, 4, 11};

    int m[] = {12, 24, 8, 32};
    int n[] = {13, 25, 32, 11};

    int ml = LEN_M(m);
    int nl = LEN_M(n);

    int rs = 0;
    out(advantageCount(dup_a(m, ml), ml, dup_a(n, nl), nl, &rs), ml);
}

#include "./871_minimum_number_of_refueling_stops.h"
void test()
{

    int m[] = {10, 1000}; int t = 100; int s = 1; // -1
    // int m[] = {10, 60, 20, 30, 30, 30, 60, 40}; int t = 100; int s = 10; // 2
    // int m[] = {2,1,6,7,8,13,15,11,18,13,20,24,17,28,22,23,36,37,39,34,43,38,48,41,46,48,49,50,56,55,59,60,62,64,66,75,69,70,71,74,87,78,95,97,81,99,85,101,90,91,93,95,107,109,101,111,106,114,115,117,118,115,121,122,123,124,125,126,134,131,133,136,142,149,151,152,145,156,158,150,162,159,161,165,169,170,169,174,172,176,177,181,183,192,186,188,189,196,198,200}; int t = 1000; int s = 2; // -1
    // int m[] = {12,86,49,157,82,18,111,137,179,168,277,80,308,81,309,185,340,32,347,128,415,100,521,101,554,128,558,116,580,135,602,50,618,152,638,90,714,51,785,33,802,151,821,185,870,175,890,158,916,193}; int t = 1000; int s = 246; // 5
    // int m[] = {7,13,10,11,12,31,22,14,32,26,38,16,50,8,54,13,75,4,85,2,88,35,90,9,96,35,103,16,115,33,121,6,123,1,138,2,139,34,145,30,149,14,160,21,167,14,188,7,196,27,248,4,256,35,262,16,264,12,283,23,297,15,307,25,311,35,316,6,345,30,348,2,354,21,360,10,362,28,363,29,367,7,370,13,402,6,410,32,447,20,453,13,454,27,468,1,470,8,471,11,474,34,486,13,490,16,495,10,527,9,533,14,553,36,554,23,605,5,630,17,635,30,640,31,646,9,647,12,659,5,664,34,667,35,676,6,690,19,709,10,721,28,734,2,742,6,772,22,777,32,778,36,794,7,812,24,813,33,815,14,816,21,824,17,826,3,838,14,840,8,853,29,863,18,867,1,881,27,886,27,894,26,917,3,953,6,956,3,957,28,962,33,967,35,972,34,984,8,987,12}; int t = 1000; int s = 36; // 32
    // int m[] = {4,1,100,1,179,1,340,1,744,1,771,1,870,1,940,1,967,1,978,1}; int t = 1000; int s = 1;
    // int m[] = {25, 25, 50, 50}; int t = 100; int s = 50; // corner case ! // 1
    // int m[] = {50, 50}; int t = 100; int s = 50; // 1
    // int m[] = {956,4130,2476,1508,5760,4209,6469,6755,10784,576,11572,4388,12224,2417,14606,5781,17762,989,17962,7285,19662,8900,24896,632,27025,4175,31126,3900,32085,2609,32989,5796,33707,7109,35183,4784,35756,5218,38128,1484,39771,5211,40087,1097,40097,6256,41059,8683,42083,8384,42836,8414,44146,5978,52683,4246,53268,1054,55526,6678,60336,7015,62137,2588,63869,1425,64267,7189,65446,5424,66260,7728,70646,1270,72399,3068,77126,8767,77463,1083,78223,7208,85061,5886,86431,2715,87338,6007,87886,950,89445,1916,93175,6359,93839,6120,96424,1733,100034,2852,100826,6247,101342,4245,101655,8213,102764,7003,103772,317,104274,5370,104768,4096,106298,7697,107437,6860,109176,6664,109451,5569,110172,5567,112412,5132,114221,7514,114366,3801,114559,2859,117123,2090,119209,459,122303,3407,122680,6163,123045,4049,123157,7597,131653,1799,134311,8628,134349,1266,138300,7828,138556,1079,138568,6666,139733,8474,140940,2677,142022,7567,143139,957,143265,5115,145459,5762,145855,3151,148362,1086,151125,6446,154312,3378,154777,2644,155715,1827,161934,2744,172028,64,187335,881,187630,5265,187673,8718,190217,1902,193037,1099,193836,5009,197028,7064,201551,5733,201743,6354,203669,3494,205309,2423,206451,468,207283,6504,207458,5101,207879,7100,208617,7998,210305,3361,211010,6674,219800,3948,220721,8352,222380,7838,224806,825,225145,405,227639,1010,230281,1596,235174,7596,235838,5091,236206,4049,237411,4899,237509,285,238256,7119,241861,7633,242007,50,243716,1182,246449,3853,246808,8468,247370,4724,248845,192,249169,3242,252147,5373,252173,595,260629,730,262774,6694,264953,5897,266269,8726,267053,6630,268888,4802,271671,8616,274139,7129,274755,7563,278073,7713,278454,488,279176,1472,281790,5863,284529,5028,284553,5188,284750,3776,290660,442,291200,1812,295162,4856,295181,5380,303646,2034,304069,7253,304213,6141,307490,4398,309477,4129,310393,2879,312625,5544,312715,1731,315714,7550,315837,2352,318539,2586,318544,6270,323660,477,323972,6236,329053,1804,331465,3420,334492,1822,334695,1110,334923,8372,335445,3071,339368,809,339899,788,341945,3933,345843,451,346946,5467,348983,3795,356560,4223,358575,5695,360646,7138,360950,2214,361918,2323,362188,7093,362355,7899,363575,3366,364297,6420,364308,947,365732,859,367162,4479,371102,3800,374726,6694,377487,607,378126,3430,379867,8113,380377,14,385096,8134,387918,2684,388377,4425,388823,7457,389016,6427,389832,5490,391487,4864,393138,475,393868,4429,397206,7914,397542,6428,400096,6606,401090,8740,408658,3,409039,7949,411986,3731,412209,8233,413922,1937,413931,4550,414414,8812,415716,2653,417632,5286,420418,4024,420886,8236,423399,532,425415,3173,428037,6517,430758,6165,431437,406,436132,5021,436824,6480,438616,667,449998,1798,450351,5971,455165,6735,455238,7441,456313,4943,459187,2219,461912,4568,462160,4046,465545,6791,466632,4451,467059,7553,467304,5999,468778,4956,469149,383,472286,766,473513,8797,474375,7297,476174,3806,484679,8582,487251,2749,487427,4235,488882,1419,491197,7026,493661,7953,494769,849,494975,1259,499792,4641,506964,855,507433,6114,512377,2153,512626,6748,522042,7698,523352,3077,525291,5282,525712,517,532578,7458,532993,7513,533456,5433,538089,8869,539244,5956,544581,1788,545522,2494,546764,6157,549221,6488,553176,3492,554016,3966,555218,1425,555796,4500,557853,8333,560295,2989,560818,2671,565579,309,567496,4168,567704,2525,569763,6155,570807,8069,571197,4868,571796,1632,577832,7517,579088,1455,581755,5106,584488,7954,584840,1019,586475,7644,589883,2303,595495,8542,604955,3400,607169,5155,607404,4148,608549,5658,612662,8639,613227,154,613753,372,614547,7341,615510,2299,617478,283,621289,7958,623263,5390,623685,2475,629975,5903,635185,2896,636575,1661,638174,2038,639394,43,640802,1129,641704,2383,642081,4804,643183,4480,644291,2900,648021,8839,656620,1241,658088,3775,658978,2676,659714,2723,662282,4283,663943,974,671444,777,678535,6924,682068,999,683132,2176,685003,3831,687501,5189,689653,7446,694331,2060,696189,6266,701837,408,703499,1399,704077,6664,704548,637,710911,4970,711459,2412,713736,6837,716807,8666,717606,2786,718281,5251,722335,2091,724334,4096,728963,4324,729198,769,731612,1418,733654,4677,736971,2680,741109,3217,742228,1166,742450,8562,743217,1241,745011,2315,745455,6699,745616,6924,748379,1796,756659,819,759057,566,761709,8683,762424,2494,763050,6804,763205,7461,766573,6737,771228,1958,771586,7472,771636,3640,771755,2915,777003,2019,777639,3323,779008,5114,780378,1370,783562,1509,785402,3459,786374,8255,788063,7822,789060,986,790316,8825,790436,5632,792138,460,792747,3718,793116,2030,795142,1206,796395,6079,797102,6250,799274,3814,802558,2129,807598,7511,807792,6410,808581,5608,811831,7130,815324,5550,819071,2112,819995,6589,820066,1714,820705,8470,821546,8322,823943,8067,824699,2656,824751,4092,827267,90,828122,4239,831718,5361,832316,8482,833559,2169,833737,5236,834627,2117,835079,5849,835712,6216,842291,8364,842703,4587,847507,3434,848443,6425,849038,6766,849757,5417,849791,2590,850007,2891,861308,3569,862276,7643,869775,4907,871788,673,872913,7707,873704,3223,878971,1354,881580,1510,881597,5341,882281,2475,882698,7864,884613,6103,884665,785,885196,4379,892818,3707,893944,3789,900601,6941,901045,4328,902918,2072,904062,3496,909911,1207,910805,4382,911280,8771,911516,1669,914930,7694,916021,4581,918656,1066,918767,913,918840,7468,920441,4637,920509,291,921108,8580,921340,1974,925998,6427,927031,8118,928038,7608,928288,5388,929004,8020,930830,4674,934513,8660,935935,2503,937601,6924,940429,7496,943014,292,947321,5414,949361,4828,949720,8732,953634,7895,954949,6251,956906,2429,957005,4549,961247,1546,962933,400,963164,6443,964044,4432,964235,2354,965394,2949,966599,6758,966668,3425,971761,5779,975504,6955,977498,4207,978367,1246,978767,1574,979269,3459,980816,8436,981501,7330,981823,7311,982264,1020,985099,6363,987058,6079,989042,8690,991040,5242,991981,2685,992448,1819,992529,8075,994790,6485,997292,5039,998416,6100,998858,8484,999782,3423}; int t = 1000000; int s = 8900; // 130

    int l = LEN_M(m);
    int c = 2;
    int rs = l / c;
    int** r = gen_aa(m, l, c);

    printf("%d.\n", minRefuelStops(t, s, r, rs, NULL));
}

#include "./490_the_maze.h"
void test()
{
    int m[] = {
               0, 0, 1, 0, 0,
               0, 0, 0, 0, 0,
               0, 0, 0, 1, 0,
               1, 1, 0, 1, 1,
               0, 0, 0, 0, 0
    };

    int s[] = {0, 4};
    int d[] = {3, 2};
    // int d[] = {2, 4};

    int l = LEN_M(m);
    int c = 5;
    int** r = gen_aa(m, l, c);

    printf("%d.\n", hasPath(r, l / c, c, s, 2, d, 2));
}

#include "./376_wiggle_subsequence.h"
void test()
{

    // int m[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int m[] = {1, 7, 4, 9, 2, 5};

    int m[] = {1, 17, 5, 10, 13, 15, 10, 5, 16, 8};

    int l = LEN_M(m);
    printf("%d.\n", wiggleMaxLength(m, l));
}

#include "./548_split_array_with_equal_sum.h"
void test()
{
    // int m[] = {1, 2, 1, 2, 1, 2, 3, -2};
    // int m[] = {-1, 0, -1, 0, -1, 0, -1};
    int m[] = {1,2,1,3,0,0,2,2,1,3,3};
    int l = LEN_M(m);
    printf("%d.\n", splitArray(m, l));
}

#include "./555_split_concatenated_strings.h"
void test()
{

    // char* m[] = {"abc", "xyz", "defzzz", "", "", "", "zzzzzzxxxxxxzzzz"};
    // char* m[] = {"abc", "xyz"};
    // char* m[] = {"a", "b", "c"};
    char *m[] = {"lc", "evol", "cdy"};
    // char* m[] = {"yzy", "aba"};
    int l = LEN_M(m);

    printf("%s.\n", splitLoopedString(m, l));
}

#include "./518_coin_change_2.h"
void test()
{
    // int m[] = {1, 2, 5}; int a = 5;
    // int m[] = {1, 2, 5}; int a = 10;
    // int m[] = {1, 2, 5, 10}; int a = 10;
    // int m[] = {1, 2, 5, 10, 20, 30, 40, 50, 60, 70, 100, 200, 3, 45, 25, 70}; int a = 5000;
    // int m[] = {}; int a = 7; // 0
    // int m[] = {}; int a = 0; // 1

    int m[] = {3, 5, 7, 8, 9, 10, 11}; int a = 100; // 6606

    int l = LEN_M(m);

    printf("%d.\n", change(a, m, l));
}

#include "./126_word_ladder_II.h"
void test()
{

    // char* m[] = {"hot", "dot", "dog", "lot", "log", "cog"};
    // char* m[] = {"cog", "dot"};

    // char* m[] = {"si","go","se","cm","so","ph","mt","db","mb","sb","kr","ln","tm","le","av","sm","ar","ci","ca","br","ti","ba","to","ra","fa","yo","ow","sn","ya","cr","po","fe","ho","ma","re","or","rn","au","ur","rh","sr","tc","lt","lo","as","fr","nb","yb","if","pb","ge","th","pm","rb","sh","co","ga","li","ha","hz","no","bi","di","hi","qa","pi","os","uh","wm","an","me","mo","na","la","st","er","sc","ne","mn","mi","am","ex","pt","io","be","fm","ta","tb","ni","mr","pa","he","lr","sq","ye"}; char* b = "qa";  char* e = "sq";


    char* b = "hit";
    char* e = "cog";
    char* m[] = {"hot", "dot", "dog", "lot", "cog"};

    // char* b = "cet";
    // char* e = "ism";
    // char* m[] = {"kid","tag","pup","ail","tun","woo","erg","luz","brr","gay","sip","kay","per","val","mes","ohs","now","boa","cet","pal","bar","die","war","hay","eco","pub","lob","rue","fry","lit","rex","jan","cot","bid","ali","pay","col","gum","ger","row","won","dan","rum","fad","tut","sag","yip","sui","ark","has","zip","fez","own","ump","dis","ads","max","jaw","out","btu","ana","gap","cry","led","abe","box","ore","pig","fie","toy","fat","cal","lie","noh","sew","ono","tam","flu","mgm","ply","awe","pry","tit","tie","yet","too","tax","jim","san","pan","map","ski","ova","wed","non","wac","nut","why","bye","lye","oct","old","fin","feb","chi","sap","owl","log","tod","dot","bow","fob","for","joe","ivy","fan","age","fax","hip","jib","mel","hus","sob","ifs","tab","ara","dab","jag","jar","arm","lot","tom","sax","tex","yum","pei","wen","wry","ire","irk","far","mew","wit","doe","gas","rte","ian","pot","ask","wag","hag","amy","nag","ron","soy","gin","don","tug","fay","vic","boo","nam","ave","buy","sop","but","orb","fen","paw","his","sub","bob","yea","oft","inn","rod","yam","pew","web","hod","hun","gyp","wei","wis","rob","gad","pie","mon","dog","bib","rub","ere","dig","era","cat","fox","bee","mod","day","apr","vie","nev","jam","pam","new","aye","ani","and","ibm","yap","can","pyx","tar","kin","fog","hum","pip","cup","dye","lyx","jog","nun","par","wan","fey","bus","oak","bad","ats","set","qom","vat","eat","pus","rev","axe","ion","six","ila","lao","mom","mas","pro","few","opt","poe","art","ash","oar","cap","lop","may","shy","rid","bat","sum","rim","fee","bmw","sky","maj","hue","thy","ava","rap","den","fla","auk","cox","ibo","hey","saw","vim","sec","ltd","you","its","tat","dew","eva","tog","ram","let","see","zit","maw","nix","ate","gig","rep","owe","ind","hog","eve","sam","zoo","any","dow","cod","bed","vet","ham","sis","hex","via","fir","nod","mao","aug","mum","hoe","bah","hal","keg","hew","zed","tow","gog","ass","dem","who","bet","gos","son","ear","spy","kit","boy","due","sen","oaf","mix","hep","fur","ada","bin","nil","mia","ewe","hit","fix","sad","rib","eye","hop","haw","wax","mid","tad","ken","wad","rye","pap","bog","gut","ito","woe","our","ado","sin","mad","ray","hon","roy","dip","hen","iva","lug","asp","hui","yak","bay","poi","yep","bun","try","lad","elm","nat","wyo","gym","dug","toe","dee","wig","sly","rip","geo","cog","pas","zen","odd","nan","lay","pod","fit","hem","joy","bum","rio","yon","dec","leg","put","sue","dim","pet","yaw","nub","bit","bur","sid","sun","oil","red","doc","moe","caw","eel","dix","cub","end","gem","off","yew","hug","pop","tub","sgt","lid","pun","ton","sol","din","yup","jab","pea","bug","gag","mil","jig","hub","low","did","tin","get","gte","sox","lei","mig","fig","lon","use","ban","flo","nov","jut","bag","mir","sty","lap","two","ins","con","ant","net","tux","ode","stu","mug","cad","nap","gun","fop","tot","sow","sal","sic","ted","wot","del","imp","cob","way","ann","tan","mci","job","wet","ism","err","him","all","pad","hah","hie","aim","ike","jed","ego","mac","baa","min","com","ill","was","cab","ago","ina","big","ilk","gal","tap","duh","ola","ran","lab","top","gob","hot","ora","tia","kip","han","met","hut","she","sac","fed","goo","tee","ell","not","act","gil","rut","ala","ape","rig","cid","god","duo","lin","aid","gel","awl","lag","elf","liz","ref","aha","fib","oho","tho","her","nor","ace","adz","fun","ned","coo","win","tao","coy","van","man","pit","guy","foe","hid","mai","sup","jay","hob","mow","jot","are","pol","arc","lax","aft","alb","len","air","pug","pox","vow","got","meg","zoe","amp","ale","bud","gee","pin","dun","pat","ten","mob"};

    // char* m[] = {"shanny","shinny","whinny","whiney","shiver","sharer","scarer","scaler","render","fluxes","teases","starks","clinks","messrs","crewed","donner","blurts","bettye","powell","castes","hackee","hackle","heckle","deckle","decile","defile","define","refine","repine","rapine","ravine","raving","roving","chased","roping","coping","coming","homing","pointy","hominy","homily","homely","comely","comedy","comedo","vagues","crocus","spiked","bobbed","dourer","smells","feared","wooden","stings","loafer","pleads","gaiter","meeter","denser","bather","deaves","wetted","pleats","cadger","curbed","grover","hinged","budget","gables","larked","flunks","fibbed","bricks","bowell","yonder","grimes","clewed","triads","legion","lacier","ridden","bogied","camper","damien","spokes","flecks","goosed","snorer","choked","choler","leakey","vagued","flumes","scanty","bugger","tablet","nilled","julies","roomed","ridges","snared","singes","slicks","toiled","verged","shitty","clicks","farmed","stunts","dowsed","brisks","skunks","linens","hammer","naiver","duster","elates","kooked","whacky","mather","loomed","soured","mosses","keeled","drains","drafty","cricks","glower","brayed","jester","mender","burros","arises","barker","father","creaks","prayed","bulges","heaped","called","volley","girted","forded","huffed","bergen","grated","douses","jagger","grovel","lashes","creeds","bonier","snacks","powder","curled","milker","posers","ribbed","tracts","stoked","russel","bummer","cusses","gouged","nailed","lobbed","novels","stands","caches","swanks","jutted","zinged","wigged","lunges","divers","cranny","pinter","guides","tigers","traces","berber","purges","hoaxer","either","bribed","camped","funked","creaky","noises","paused","splits","morrow","faults","ladies","dinged","smoker","calved","deters","kicker","wisher","ballad","filled","fobbed","tucker","steams","rubber","staled","chived","warred","draped","curfew","chafed","washer","tombed","basket","limned","rapped","swills","gashed","loaner","settee","layers","bootee","rioted","prance","sharps","wigner","ranted","hanker","leaden","groped","dalian","robbed","peeled","larder","spoofs","pushed","hallie","maiden","waller","pashas","grains","pinked","lodged","zipper","sneers","bootie","drives","former","deepen","carboy","snouts","fained","wilmer","trance","bugles","chimps","deeper","bolder","cupped","mauser","pagers","proven","teaser","plucky","curved","shoots","barged","mantes","reefer","coater","clotho","wanner","likens","swamis","troyes","breton","fences","pastas","quirky","boiler","canoes","looted","caries","stride","adorns","dwells","hatred","cloths","rotted","spooks","canyon","lances","denied","beefed","diaper","wiener","rifled","leader","ousted","sprays","ridged","mousey","darken","guiled","gasses","suited","drools","bloody","murals","lassie","babied","fitter","lessee","chiles","wrongs","malian","leaves","redder","funnel","broths","gushes","grants","doyens","simmer","locked","spoors","berger","landed","mosley","scorns","whiten","hurled","routed","careen","chorus","chasms","hopped","cadged","kicked","slewed","shrewd","mauled","saucer","jested","shriek","giblet","gnarls","foaled","roughs","copses","sacked","blends","slurps","cashew","grades","cramps","radius","tamped","truths","cleans","creams","manner","crimps","hauled","cheery","shells","asters","scalps","quotas","clears","clover","weeder","homers","pelted","hugged","marked","moaned","steely","jagged","glades","goshes","masked","ringer","eloped","vortex","gender","spotty","harken","hasten","smiths","mulled","specks","smiles","vainer","patted","harden","nicked","dooley","begged","belief","bushel","rivers","sealed","neuter","legged","garter","freaks","server","crimea","tossed","wilted","cheers","slides","cowley","snotty","willed","bowled","tortes","pranks","yelped","slaved","silver","swords","miners","fairer","trills","salted","copsed","crusts","hogged","seemed","revert","gusted","pixies","tamika","franks","crowed","rocked","fisher","sheers","pushes","drifts","scouts","sables","sallie","shiner","coupes","napped","drowse","traced","scenes","brakes","steele","beater","buries","turned","luther","bowers","lofted","blazer","serves","cagney","hansel","talker","warmed","flirts","braced","yukked","milken","forged","dodder","strafe","blurbs","snorts","jetted","picket","pistil","valved","pewter","crawls","strews","railed","clunks","smiled","dealer","cussed","hocked","spited","cowers","strobe","donned","brawls","minxes","philby","gavels","renter","losses","packet","defied","hazier","twines","balled","gaoled","esther","narrow","soused","crispy","souped","corned","cooley","rioter","talley","keaton","rocker","spades","billie","mattel","billet","horton","navels","sander","stoker","winded","wilder","cloyed","blazed","itched","docked","greene","boozed","ticket","temped","capons","bravos","rinded","brandi","massed","sobbed","shapes","yippee","script","lesion","mallet","seabed","medals","series","phases","grower","vertex","dented","tushed","barron","toffee","bushes","mouser","zenger","quaked","marley","surfed","harmed","mormon","flints","shamed","forgot","jailor","boater","sparer","shards","master","pistol","tooted","banned","drover","spices","gobbed","corals","chucks","kitten","whales","nickel","scrape","hosted","hences","morays","stomps","marcel","hummed","wonder","stoves","distil","coffer","quaker","curler","nurses","cabbed","jigger","grails","manges","larger","zipped","rovers","stints","nudges","marlin","exuded","storey","pester","longer","creeps","meaner","wallop","dewier","rivera","drones","valued","bugled","swards","cortes","charts","benson","wreaks","glares","levels","smithy","slater","suites","paired","fetter","rutted","levied","menses","wither","woolly","weeded","planed","censer","tested","pulled","hitter","slicer","tartar","chunky","whirrs","mewled","astern","walden","hilton","cached","geller","dolled","chores","sorter","soothe","reused","clumps","fueled","hurler","helled","packed","ripped","tanned","binder","flames","teased","punker","jerked","cannon","joists","whited","sagged","heaven","hansen","grayer","turfed","cranks","stater","bunted","horsey","shakes","brands","faints","barber","gorged","creamy","mowers","scrams","gashes","knacks","aeries","sticks","altars","hostel","pumped","reeves","litter","hoaxed","mushed","guided","ripper","bought","gelled","ranker","jennie","blares","saloon","bomber","mollie","scoops","coolie","hollis","shrunk","tattle","sensed","gasket","dodoes","mapped","strips","dodges","sailed","talked","sorted","lodges","livest","pastel","ladles","graded","thrice","thales","sagger","mellon","ganged","maroon","fluked","raised","nannie","dearer","lither","triked","dorset","clamps","lonnie","spates","larded","condor","sinker","narced","quaver","atones","farted","elopes","winger","mottle","loaned","smears","joanne","boozes","waster","digger","swoops","smokey","nation","drivel","ceased","miffed","faiths","pisses","frames","fooled","milled","dither","crazed","darryl","mulder","posses","sumter","weasel","pedals","brawny","charge","welted","spanks","sallow","joined","shaker","blocks","mattie","swirls","driver","belles","chomps","blower","roared","ratted","hailed","taunts","steamy","parrot","deafer","chewed","spaces","cuffed","molded","winked","runnel","hollow","fluted","bedded","crepes","stakes","vested","parley","burton","loiter","massey","carnap","closed","bailed","milder","heists","morale","putter","snyder","damion","conned","little","pooped","ticced","cocked","halves","wishes","francs","goblet","carlin","pecked","julius","raster","shocks","dawned","loosen","swears","buried","peters","treats","noshed","hedges","trumps","rabies","ronnie","forces","ticked","bodies","proved","dadoes","halved","warner","divest","thumbs","fettle","ponies","testis","ranked","clouts","slates","tauted","stools","dodged","chancy","trawls","things","sorrow","levies","glides","battle","sauced","doomed","seller","strove","ballet","bumper","gooses","foiled","plowed","glints","chanel","petals","darted","seared","trunks","hatter","yokels","vanned","tweedy","rubles","crones","nettie","roofed","dusted","dicker","fakers","rusted","bedder","darrin","bigger","baylor","crocks","niches","tented","cashed","splats","quoted","soloed","tessie","stiles","bearer","hissed","soiled","adored","bowery","snakes","wagers","rafter","crests","plaids","cordon","listed","lawson","scared","brazos","horded","greens","marred","mushes","hooper","halter","ration","calked","erodes","plumed","mummer","pinged","curios","slated","ranter","pillow","frills","whaled","bathos","madden","totted","reamed","bellow","golfer","seaman","barred","merger","hipped","silken","hastes","strays","slinks","hooted","convex","singed","leased","bummed","leaner","molted","naught","caters","tidied","forges","sealer","gulled","plumps","racket","fitted","rafted","drapes","nasser","tamara","winced","juliet","ledger","bettie","howell","reeved","spiced","thebes","apices","dorsey","welled","feeler","warded","reader","folded","lepers","cranky","bosses","ledges","player","yellow","lunged","mattes","confer","malign","shared","brandy","filmed","rhinos","pulsed","rouses","stones","mixers","cooped","joiner","papped","liston","capote","salvos","wicker","ciders","hoofed","wefted","locket","picker","nougat","limpid","hooter","jailer","peaces","mashes","custer","wallis","purees","trends","irater","honied","wavers","tanner","change","hinges","tatted","cookie","catnap","carton","crimed","betted","veined","surges","rumped","merlin","convey","placid","harped","dianna","hookey","nobles","carted","elided","whined","glover","bleats","stales","husker","hearer","tartan","weaker","skewer","lumbar","temper","gigged","gawked","mayors","pigged","gather","valves","mitten","largos","boreas","judges","cozens","censor","frilly","dumbed","downer","jogger","scolds","danced","floras","funded","lumped","dashes","azores","quites","chunks","washed","duller","bilges","cruels","brooks","fishes","smoked","leaped","hotter","trials","heaves","rouges","kissed","sleety","manses","spites","starts","banded","clings","titted","vetoed","mister","mildew","wailed","sheets","peeked","passer","felted","broken","lieges","ruffed","bracts","buster","muffed","lanker","breaks","coffey","sighed","charms","balded","kisser","booths","leaven","cheeps","billed","lauder","bumped","career","stocks","airier","limped","jeanie","roamed","carves","lilted","router","bonnie","denver","briggs","steeps","nerves","oinked","bucked","hooves","dancer","burris","parked","swells","collie","perked","cooler","fopped","wedder","malted","sabers","lidded","conner","rogues","fought","dapper","purled","crowds","barnes","bonner","globed","goners","yankee","probes","trains","sayers","jersey","valley","vatted","tauter","dulled","mucked","jotted","border","genres","banked","filter","hitler","dipper","dollie","sieves","joliet","tilted","checks","sports","soughs","ported","causes","gelded","mooter","grills","parred","tipped","placer","slayer","glided","basked","rinses","tamper","bunged","nabbed","climbs","faeces","hanson","brainy","wicket","crowns","calmed","tarred","spires","deanne","gravel","messes","snides","tugged","denier","moslem","erased","mutter","blahed","hunker","fasten","garbed","cracks","braked","rasped","ravens","mutton","tester","tories","pinker","titled","arisen","softer","woolen","disses","likest","dicier","nagged","lipton","plumbs","manged","faulty","sacred","whiter","erases","padres","haired","captor","metals","cardin","yowled","trusts","revels","boxers","toured","spouts","sodded","judged","holley","figged","pricey","lapses","harper","beaned","sewers","caused","willie","farmer","pissed","bevies","bolled","bugler","votive","person","linton","senses","supped","mashed","pincer","wetter","tangos","sticky","lodger","loader","daunts","peaked","moused","sleeps","lasted","tasked","awards","lovely","gushed","spurts","canter","mantis","coaled","groans","dannie","oopses","sneaky","vogues","mobile","plumes","chides","theses","marcia","parser","flexed","stayed","fouler","tusked","quartz","daubed","clancy","rouged","flaked","norton","dunner","corded","shelly","hester","fucker","polled","rodger","yeager","zinced","livens","browne","gonged","pubbed","sapped","thrive","placed","jensen","moises","scopes","stumpy","stocky","heller","levers","morals","wheres","gasped","jobber","leaved","champs","rosier","pallet","shooed","parses","bender","closet","pureed","routes","verges","bulled","foster","rummer","molten","condos","better","cotter","lassos","grafts","vendor","thrace","codded","tinker","bullet","beaker","garden","spiels","popper","skills","plated","farrow","flexes","esters","brains","handel","puller","dickey","creeks","ballot","singer","sicker","spayed","spoils","rubier","missed","framed","bonnet","molder","mugger","waived","taster","robles","tracks","nearer","lister","horsed","drakes","lopped","lubber","busied","button","eluded","ceases","sought","realer","lasers","pollen","crisps","binned","darrel","crafty","gleams","lonely","gordon","harley","damian","whiles","wilton","lesser","mallow","kenyon","wimped","scened","risked","hunter","rooter","ramses","inches","goaded","ferber","freaky","nerved","spoken","lovers","letter","marrow","bulbed","braver","sloped","breads","cannes","bassos","orated","clever","darren","bredes","gouger","servos","trites","troths","flunky","jammed","bugged","watter","motive","humped","writer","pestle","rilled","packer","foists","croats","floury","napier","floors","scotty","sevens","harrow","welter","quacks","daybed","lorded","pulses","pokier","fatten","midges","joints","snoopy","looter","monies","canted","riffed","misses","bunker","piston","yessed","earner","hawked","wedged","brewer","nested","graver","hoaxes","slaves","pricks","magpie","bernie","rapier","roster","poohed","corner","trysts","rogers","whirls","bathed","teasel","opener","minced","sister","dreamy","worker","rinked","panted","triton","mervin","snowed","leafed","thinks","lesson","millet","larson","lagged","likely","stormy","fortes","hordes","wovens","kinked","mettle","seated","shirts","solver","giants","jilted","leaded","mendez","lowers","bidder","greats","pepped","flours","versus","canton","weller","cowper","tapped","dueled","mussed","rubies","bonged","steals","formed","smalls","sculls","docket","ouster","gunned","thumps","curred","withes","putted","buttes","bloats","parsed","galley","preses","tagged","hanger","planes","chords","shafts","carson","posits","zinger","solves","tensed","tastes","rinsed","kenned","bitten","leslie","chanty","candor","daises","baggie","wedded","paints","moored","haloed","hornet","lifted","fender","guiles","swifts","flicks","lancer","spares","pellet","passed","finked","joanna","bidden","swamps","lapped","leered","served","shirrs","choker","limper","marker","nudged","triter","thanks","peered","bruins","loaves","fabled","lathes","pipers","hooped","orates","burned","swines","sprats","warder","colder","crazes","reined","prized","majors","darrow","waifed","rooked","rickey","patter","shrive","gropes","gassed","throve","region","weaken","hettie","walton","galled","convoy","wesson","exudes","tinted","clanks","blinks","slacks","stilts","franny","socket","wished","kidded","knotty","turves","cashes","geared","sunned","glowed","sadden","harlem","testes","sweets","becket","blazes","batter","fellow","clovis","copier","shaped","husked","gimlet","rooney","taints","sashes","bossed","cootie","franck","probed","bagged","smocks","batten","spared","chills","relics","meyers","grader","tromps","dimmer","pasted","pepper","capped","played","junket","easier","palmed","pander","vaguer","bulged","dissed","borges","raises","wallow","jigged","bogged","burped","neater","rammed","fibers","castor","skirts","cancer","tilled","spored","dander","denims","budges","trucks","sowers","yapped","cadges","wrists","hacker","graved","vipers","noshes","minted","lessor","cassia","wrecks","hidden","brando","honeys","chilli","ragged","breded","punier","stacey","sisses","jocked","croaks","dinned","walker","heston","flares","coined","cannot","chocks","leases","wander","balder","warmer","bawled","donnie","damson","header","chilly","models","simper","watery","milked","poises","combed","toilet","gallop","sonnet","loosed","yawned","splays","pauses","bother","graphs","shrews","scones","manuel","milers","hotels","bennie","flores","spells","grimed","tenses","staged","puffer","posies","motion","fudged","fainer","tatter","seraph","nansen","months","muppet","tamera","shaman","falser","becker","lisbon","clefts","weeper","mendel","girder","takers","torsos","forked","dances","stated","yelled","scants","frothy","rolled","yodels","listen","craned","brooms","suffer","easter","shills","craves","bleeps","belled","dished","bordon","zither","jacket","lammer","kirked","shaved","atoned","frumpy","nosier","vender","graced","clingy","chants","wrests","cursed","prunes","tarter","stripe","coffee","veiled","tweeds","shrine","spines","kegged","melvin","gasser","market","marten","peeped","sanger","somber","spider","netted","radium","slings","scarfs","mended","creels","shaves","payers","bunked","movers","beings","conked","cozies","benton","codger","prints","gusset","longed","burner","jambed","mullet","fogged","scores","carbon","sleeks","helped","waxier","gilded","harlot","winces","tenser","lowell","ramsey","kennan","booted","beaver","rested","shouts","hickey","looped","swings","wonted","dilled","defers","lolled","pupped","cruets","solved","romper","defter","chokes","kithed","garnet","bookie","stared","stares","latter","lazies","fanned","wagged","dunces","corked","cloned","prided","baxter","pusses","boomed","masses","warren","weaves","delves","handed","merton","lusher","hepper","gibber","sender","parsec","snares","masher","seamed","sweats","welles","gagged","curter","mother","beeped","vealed","shoved","slaver","hacked","gutted","ranged","bashed","closer","storks","meshed","cortex","copper","severn","gripes","carlos","scares","crates","boiled","ginned","mouses","raided","greyed","verier","slopes","fenced","sniper","priced","flawed","buffed","spacey","favors","platen","miller","walled","cutter","skated","holier","beamed","waiter","drowns","clomps","quarks","bested","frisks","purged","scalds","marian","flower","howled","plover","bikers","trails","hagged","smirks","sitter","carmen","lanced","plants","nobler","yakked","thesis","lassen","margin","wagner","sifter","houses","screws","booker","dormer","meters","padded","loaded","cartel","sutton","willis","chatty","dunked","dreamt","dalton","fables","coveys","muller","shanty","adders","tailor","helper","liters","butted","maiman","hollie","gallon","xavier","shrank","mickey","rather","powers","keened","doused","kisses","flanks","dotted","phased","dumped","linger","kramer","spaced","soften","strife","rowers","hovers","crimes","crooks","carrel","braces","lander","shrove","skulks","banker","itches","dropsy","misted","pulped","cloche","fawned","states","teared","beeper","raider","groves","livery","aerier","keenan","severe","sabres","bogies","coated","harlow","tanked","mellow","cozier","shanks","spooky","blamed","tricks","sleets","punted","jumped","caxton","warped","halley","frisky","shines","skater","lumber","truces","sliced","gibbet","narked","chives","graves","gummed","holler","glazes","nieves","hushed","nought","prated","chored","cloudy","kidder","huston","straws","twined","gifted","rodney","haloes","france","wirier","mercia","rubbed","coaxed","sumner","snipes","nipper","leiden","madman","margie","footed","firmed","budded","froths","senior","hoover","tailed","glider","straps","stalks","billow","racked","javier","zoomed","shades","whores","braids","roused","sudden","dogies","fencer","snaked","flings","traded","gunner","snider","staten","levees","lathed","sailor","waited","muster","clothe","lulled","cargos","revved","sooths","flamed","borers","feller","bladed","oliver","collin","wusses","murder","parted","jailed","frayed","doored","cheeks","misled","belted","winter","merges","shaven","fudges","tabbed","forget","sloths","cachet","mealed","sassed","salter","haunts","ranger","rivets","deeded","reaped","damped","crated","youths","whacks","tamers","misery","seeped","eerier","tiller","busses","gloved","hushes","cronus","pruned","casket","direst","guilds","motley","spools","fevers","snores","greece","elides","waists","rattle","trader","juster","rashes","stoney","pipped","solder","sinner","prides","rugged","steers","gnarly","titter","cities","walter","stolen","steaks","hawker","weaned","jobbed","jacked","pikers","hipper","spoilt","beeves","craved","gotten","balked","sherry","looney","crisis","callie","swiped","fished","rooted","bopped","bowler","escher","chumps","jerrod","lefter","snooty","fillet","scales","comets","lisped","decked","clowns","horned","robber","bottle","reeled","crapes","banter","martel","dowels","brandt","sweeps","heeled","tabled","manors","danger","dionne","prayer","decker","millie","boated","damned","horses","globes","failed","lammed","nigher","joyner","sobers","chided","tipper","parcel","flakes","fugger","elated","hinder","hopper","crafts","wipers","badder","jessie","matted","wafted","pealed","cheats","elites","torres","bushed","sneaks","tidies","brings","stalls","payees","zonked","danker","poshes","smelts","stoops","warden","chicks","ramsay","budged","firmer","glazed","heated","slices","hovels","belied","shifts","pauper","tinges","weston","casted","titles","droves","roomer","modals","seamen","wearer","blonde","berlin","libbed","tensor","hokier","lambed","graped","headed","copped","eroses","fagged","filler","keener","stages","civets","spills","tithed","sullen","sucked","briton","whaler","hooded","tittle","bucket","furled","darned","planet","clucks","batted","dagger","brides","severs","pathos","grainy","relied","carpel","makers","lancet","slowed","messed","ravels","faster","gabbed","chance","grayed","santos","spends","chinos","saints","swirly","dories","wilson","milton","clangs","manual","nodded","signer","stript","etched","vaster","wastes","stored","minces","purred","marvin","pinned","skulls","heaved","wadded","fowled","hashed","mullen","relief","hatted","primed","chaffs","canned","lackey","showed","shandy","chases","maggie","deafen","bussed","differ","worked","marted","ducked","socked","fussed","greyer","herder","trusty","follow","samson","babies","whorls","stanks","manson","cranes","murrow","shrink","genius","holder","lenses","yucked","termed","ruined","junker","belies","joshed","cooled","basted","greeks","fuller","healer","carver","havens","drunks","sucker","lotion","glared","healed","pocked","rifles","weaved","canoed","punter","hinton","settle","boobed","hinted","scored","harder","status","sloven","hayden","golfed","scoots","bloods","slaked","jugged","louses","cassie","shaded","rushed","pitied","barked","honked","rasher","forced","shaver","vowels","holden","pelvis","blades","chests","preyer","floods","deanna","cation","mapper","falter","dabbed","mocker","nestle","shucks","heeded","ticker","binges","summer","slumps","lusted","scampi","crofts","gorges","pardon","torses","smokes","lashed","bailey","jabbed","calmer","preset","forbes","hasted","wormed","winged","minors","banner","grazed","hewers","kernel","jolted","sniped","clunky","ratios","blinds","ganges","misers","spikes","riders","hallow","grumpy","barren","summed","infers","places","jarred","killer","plaint","goofed","subbed","prudes","sipped","kookie","whines","droopy","palled","cherry","proves","mobbed","spaded","cheese","pluses","bathes","motels","spewed","soaked","howler","puffed","malled","shrike","slided","fulled","pouted","shames","lessen","ringed","teemed","grands","linked","wooten","feuded","deaden","scents","flutes","salton"};
    // char* b = "charge";
    // char* e = "comedo";


    // char* b = "nape";
    // char* e = "mild";
    // char* m[] = {"dose","ends","dine","jars","prow","soap","guns","hops","cray","hove","ella","hour","lens","jive","wiry","earl","mara","part","flue","putt","rory","bull","york","ruts","lily","vamp","bask","peer","boat","dens","lyre","jets","wide","rile","boos","down","path","onyx","mows","toke","soto","dork","nape","mans","loin","jots","male","sits","minn","sale","pets","hugo","woke","suds","rugs","vole","warp","mite","pews","lips","pals","nigh","sulk","vice","clod","iowa","gibe","shad","carl","huns","coot","sera","mils","rose","orly","ford","void","time","eloy","risk","veep","reps","dolt","hens","tray","melt","rung","rich","saga","lust","yews","rode","many","cods","rape","last","tile","nosy","take","nope","toni","bank","jock","jody","diss","nips","bake","lima","wore","kins","cult","hart","wuss","tale","sing","lake","bogy","wigs","kari","magi","bass","pent","tost","fops","bags","duns","will","tart","drug","gale","mold","disk","spay","hows","naps","puss","gina","kara","zorn","boll","cams","boas","rave","sets","lego","hays","judy","chap","live","bahs","ohio","nibs","cuts","pups","data","kate","rump","hews","mary","stow","fang","bolt","rues","mesh","mice","rise","rant","dune","jell","laws","jove","bode","sung","nils","vila","mode","hued","cell","fies","swat","wags","nate","wist","honk","goth","told","oise","wail","tels","sore","hunk","mate","luke","tore","bond","bast","vows","ripe","fond","benz","firs","zeds","wary","baas","wins","pair","tags","cost","woes","buns","lend","bops","code","eddy","siva","oops","toed","bale","hutu","jolt","rife","darn","tape","bold","cope","cake","wisp","vats","wave","hems","bill","cord","pert","type","kroc","ucla","albs","yoko","silt","pock","drub","puny","fads","mull","pray","mole","talc","east","slay","jamb","mill","dung","jack","lynx","nome","leos","lade","sana","tike","cali","toge","pled","mile","mass","leon","sloe","lube","kans","cory","burs","race","toss","mild","tops","maze","city","sadr","bays","poet","volt","laze","gold","zuni","shea","gags","fist","ping","pope","cora","yaks","cosy","foci","plan","colo","hume","yowl","craw","pied","toga","lobs","love","lode","duds","bled","juts","gabs","fink","rock","pant","wipe","pele","suez","nina","ring","okra","warm","lyle","gape","bead","lead","jane","oink","ware","zibo","inns","mope","hang","made","fobs","gamy","fort","peak","gill","dino","dina","tier"};

    int l = LEN_M(m);

    int* cs;
    int rs;
    char*** r = findLadders(b, e, m, l, &cs, &rs);

    for (int i = 0; i < rs; i ++)
        outstr(r[i], cs[i]);
}

#include "./805_split_array_with_same_average.h"

bool try_can(int* n, int s, int e)
{
    int ix[64] = {0};
    int si = 1;

    int nxt = 0;
    int cur = 0;

    while (true)
    {
        int try = cur + n[nxt];

        if (nxt >= e)
        {
            out(ix, si);

            si --;
            if (!si)
                return false;

            cur -= n[ix[si]];
            nxt = ++ ix[si];
            printf("si %d value is %d %d %d.\n", si, try, nxt, ix[si]);
        }
        else
        {
            ix[si ++] = nxt;
            cur = try;
            nxt ++;
        }
    }
    return false;
}

void test()
{
    int m[] = {1, 2, 3, 4};
    // int m[] = {0, 1, -1, -2, 3, -1};

    // int m [] = {60,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30};
    int l = LEN_M(m);

    // try_can(m, 0, l - 1);
    printf("%d.\n", splitArraySameAverage(m, l));
}

#include "761_special_binary_string.h"
void test()
{
    // char* s = "10";
    char* s = "";cs
    // char* s = "1100110010";
    // char* s = "1101100011110000"; // wrong
    // char* s = "11011000111000";
    // char* s = "101101011000";
    printf("%s\n%s\n", s,  makeLargestSpecial(s));q
}

#include "./63_unique_paths_II.h"
void test()
{

    // int m[] = {
    //            0, 0, 0, 0, 0, 0, 0,
    //            1, 1, 1, 1, 1, 1, 1,
    //            0, 0, 0, 0, 0, 0, 0,
    // }; int c = 7;

    int m[] = {0}; int c = 1;
    int l = LEN_M(m);

    int** r = gen_aa(m, l, c);

    printf("%d.\n", uniquePathsWithObstacles(r, l / c, c));
}

#include "./576_out_of_boundary_paths.h"
void test()
{
    printf("%d\n", findPaths(2, 2, 2, 0, 0));
    printf("%d\n", findPaths(1, 3, 3, 0, 1));
    printf("%d\n", findPaths(1, 3, 50, 0, 1));
}

#include "./505_the_maze_II.h"
void test()
{

    int m[] = {
               0, 0, 1, 0, 0,
               0, 0, 0, 0, 0,
               0, 0, 0, 1, 0,
               0, 1, 1, 1, 0,
               0, 0, 0, 0, 0
    };
    int s[] = {4, 4};
    int d[] = {4, 4};
    // int d[] = {3, 2};

    int l = LEN_M(m);
    int c = 5;

    int** r = gen_aa(m, l, c);

    printf("%d.\n", shortestDistance(r, l / c, c, s, 2, d, 2));
}

#include "./874_walking_robot_simulation.h"
void test()
{

    // int m[] = {4, -1, 3};
    // int d[] = {};

    int m[] = {4, -1, 4, -2, 4};
    int d[] = {2, 4};

    int l = LEN_M(m);
    int ld = LEN_M(d);
    int c = 2;
    int** r = gen_aa(d, ld, c);

    printf("%d.\n", robotSim(m, l, r, ld / c, NULL));
}

#include "./875_koko_eating_bananas.h"
void test()
{

    int m[] = {3, 6, 7, 11}; int H = 8;
    // int m[] = {30, 11, 23, 4, 20}; int H = 5;
    // int m[] = {30, 11, 23, 4, 20}; int H = 6;
    // int m[] = {332484035, 524908576, 855865114, 632922376, 222257295, 690155293, 112677673, 679580077, 337406589, 290818316, 877337160, 901728858, 679284947, 688210097, 692137887, 718203285, 629455728, 941802184}; int H = 823855818;

    int l = LEN_M(m);
    printf("%d.\n", minEatingSpeed(m, l, H));
}

#include "./873_length_of_longest_fibonacci_subsequence.h"
void test()
{

    // int m[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int m[] = {1, 3, 7, 11, 12, 14, 18};
    int m[] = {2,4,7,8,9,10,14,15,18,23,32,50};

    int l = LEN_M(m);
    printf("%d.\n", lenLongestFibSubseq(m, l));
}

#include "./474_ones_and_zeros.h"
void test()
{

    // char* s[] = {"10", "0001", "111001", "1", "0"}; int m = 5; int n = 3;
    // char* s[] = {"1", "111"}; int m = 0; int n = 5;
    // char* s [] = {"10", "0", "1"}; int m = 1; int n = 1;
    char* s[] = {"10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", "10", "0001", "111001", "1", "0", }; int m = 100; int n = 30;

    int l = LEN_M(s);

    printf("%d.\n", findMaxForm(s, l, m, n ));
}

#include "./880_random_pick_with_weight.h"
void test()
{
    // int m[] = {8, 9, 1};
    int m[] = {1, 3};
    int l = LEN_M(m);

    Solution* s = solutionCreate(m, l);

    for (int i = 0; i < 100; i ++)
        printf("%d ", solutionPickIndex(s));
}

#include "./881_random_flip_matrix.h"
void test()
{
    int m = ;
    int n = 5;

    Solution* s = solutionCreate(m, n);

    int min = m * n < 1000 ? m * n : 1000;
    for (int i = 0; i < min; i ++)
    {
        int rs;
        int* r = solutionFlip(s, &rs);
        out(r, rs);
    }

    outsh(s->mem, min);

    solutionReset(s);

    printf("==================\n");

    for (int i = 0; i < min; i ++)
    {
        int rs;
        int* r = solutionFlip(s, &rs);
        out(r, rs);
    }

}

#include "./884_Uncommon_Words_from_Two_Sentences.h"
void test()
{

    // char* a = "apple apple";
    // char* b = "bab";

    char* a = "a b c d e f g";
    char* b = "b d e f g h i a";
    // char* a = "this apple is sweet";
    // char* b = "this apple is sour";

    // char* b = "";
    // char* a = "";

    int rs = 0;
    char** r = uncommonFromSentences(a, b, &rs);

    outstr(r, rs);
}

#include "./888_fair_candy_swap.h"
void test()
{

    // int a[] = {1, 2, 5};
    // int b[] = {2, 4};

    // int b[] = {1, 1};
    // int a[] = {2, 2};

    // int b[] = {2};
    // int a[] = {1, 3};

    int a[] = {19852,28232,44410,14501,41938,18562,36701,27580,43590,18749,25929,7641,23841,24416,32461,2657,15738,15071,2116,45407,15798,41866,36278,38678,31180,13436,4041,20591,18539,28075,48903,18598,42614,44171,45446,2656,19408,21848,10314,41689,27389,46586,49567,12722,17760,48485,13444,15911,34860,41601,6698,11668,9627,43371,41572,10912,14885,16787,39592,22056,136,35478,6239,29724,22033,12686,48663,3895,4039,41999,22895,20522,6264,18765,19062,28548,38950,1930,49746,28734,48106,19563,42197,49583,44183,24969,13986,26890,44,7417,47733,12032,26830,38009,35439,21586,33925,4179,31450,635,39392,48070,17973,34467,18422,41141,5516,48885,24319,37536,34325,23725,5734,45586,5401,41300,18113,7492,15519,12976,42349,12967,17989,34188,45300,2886,5586,626,49618,47751,1790,9049,2467,15618,3024,7536,41863,41951,20848,452,25947,33864,6126,6880,29541,25239,47423,11356,40707,12368,14902,12027,18484,13476,32752,24930,8085,41169,29336,23148,47331,41227,1146,28276,28184,24583,20613,16856,3819,45618,44561,4095,12206,23351,11991,11704,38574,25773,18992,22795,46409,21885,4024,15285,15497,8726,16807,14151,49006,30504,6945,18223,35185,29632,49849,36679,37325,27202,3680,37321,49607,34594,21195,9282,35656,32875,27571,9215,45119,15979,34548,14579,14161,4436,33731,40508,22024,11383,17665,22267,21091,33115,40256,9230,20145,3718,14210,44047,1503,28620,14836,31965,29048,17154,22867,19226,36184,46518,29652,44526,42886,40507,27231,4003,40571,34095,1127,19659,24569,49283,14580,37976,48480,19761,39924,44972,12171,42250,25594,3765,14810,24116,29012,2936,24969,10759,45649,25216,17909,24599,9035,46202,36175,21676,29398,25639,8638,29268,39756,14162,106,6235,47979,1666,23009,16529,40187,18978,23051,43975,11430,23334,39070,1651,47979,31457,43651,25166,43638,47827,1953,29699,24245,20827,17238,24563,9459,40108,48966,19240,42975,15168,29806,10627,10615,33560,24806,9315,40670,47744,17104,22595,38163,2990,43360,12638,1509,27596,28127,23641,25191,29622,39238,10162,24945,20155,21886,18174,6808,46,10189,6909,44090,15654,22416,18539,12547,31403,11792,39353,11229,45455,29988,21961,29027,41922,21054,40370,66,32812,23780,48556,46248,42275,22580,26585,25666,10737,40512,49171,8948,30627,46309,21329,7977,1725,46876,1690,38599,13664,35977,43141,33023,9196,13968,6552,31454,14286,36731,46749,34702,9814,37073,23307,36605,21597,1343,28199,34580,47255,47288,21608,41503,20928,1936,21830,3691,27447,38572,13869,31209,22307,24257,37537,33774,24532,34149,16548,18946,41194,14240,38904,38874,3121,9541,1248,7557,396,39155,49071,50,6887,31535,27015,34089,35240,26792,12182,18679,11928,20985,20818,33467,10946,16612,7034,7709,3398,3327,42688,22088,46514,10964,8282,11940,32238,7813,38850,27390,14703,46477,10358,22659,38415,4246,10792,40991,607,22423,40353,1406,34234,34697,4398,19924,18091,6165,13545,473,6499,32082,28878,48564,19825,41734,34321,46978,29068,33915,25016,46245,22947,7411,1655,21202,47144,18678,26012,32617,6027,44039,15982,29582,11627,13188,12407,42765,47756,24333,31754,28875,40839,27309,43667,19722,41999,9265,24324,32809,46899,6809,33334,44555,17158,16329,6498,29680,44781,11414,2990,3091,6513,40928,21015,28478,10769,12593,31743,47504,3621,21082,9116,22463,43603,32451,8110,37206,7940,3510,14707,12360,15947,11644,9194,19632,22770,15446,26906,31477,29692,32583,6062,1694,27690,18955,15247,24952,38552,35936,44201,40547,25613,18,42613,37404,12260,35704,33193,24774,15818,5180,31657,30278,25693,34364,527,24793,30284,27825,27346,9007,29512,20115,5482,45607,29850,46333,37983,33064,20669,42105,16716,27140,23339,23964,2596,2980,8254,49105,4935,17618,3147,15387,35055,41252,48813,9526,48564,3653,36972,40871,21488,978,48727,21456,26959,8284,47793,48281,9458,10352,46944,5675,38727,28304,24112,31269,38904,30235,21597,6499,21612,5479,14044,29193,46275,2414,11535,1085,8347,17159,33165,1733,46085,49388,31330,22161,37792,41781,28984,6610,43977,3715,44991,38084,20868,1632,26368,26892,41076,13224,18461,37294,24383,10584,7914,512,632,45049,18029,47946,40738,3537,15535,41645,13806,15242,42090,46184,39853,8592,39097,45449,49477,7675,31412,37000,37275,13548,14083,17571,22550,46578,3031,25909,2194,2885,22287,48243,28905,32551,9937,47046,15962,13583,18604,40119,6645,44295,44387,1853,41168,40418,35660,23830,47216,46614,9976,16598,2307,19146,21219,30310,13858,7118,31430,12950,22623,46854,27489,46521,16863,44999,45437,22769,38813,16173,48057,18591,47192,18788,11371,16061,28369,5938,56,18466,4064,7855,48196,22592,30836,30555,31883,28608,31342,15561,44244,18962,10788,21316,6176,10868,31021,12034,20162,32245,1417,45928,30105,42029,22879,43579,31158,43368,30027,32397,1221,1683,21977,25967,46209,4661,6176,5050,25568,19287,14210,31640,31952,23810,26774,34776,26435,1341,15183,6900,267,8656,27355,28469,1960,4391,49929,22874,11608,6465,7199,42870,18600,14621,11917,12642,3197,155,23975,5670,4375,7281,37249,40453,47330,40311,38561,28678,11964,32964,7248,35634,13659,25882,4432,7277,10376,38410,43322,48053,19751,3630,31990,14555,13511,10130,780,3671,3491,42714,36646,25810,30751,14312,45595,47036,30480,25562,24464,47348,23916,101,31661,41552,46204,47835,40524,1596,1984,6344,35862,26976,1095,34525,45299,2291,47264,14572,15881,8027,23270,45705,47868,4413,20804,45117,1042,47474,15849,6179,12860,20566,5699,35676,14027,48523,24366,28806,3978,14706,15329,3458,18989,46802,8585,18661,23397,9425,21509,1185,25384,20988,41565,6961,14306,2017,29633,26075,16729,2719,31071,495,41302,24205,33671,43485,6683,28080,48343,34104,21291,32315,40079,28419,23077,8169,20316,43788,16045,48475,34204,43778,13295,42411,17896,28077,35201,33988,337,40081,47558,43998,43978,42879,11105,32233,27039,23321,35847,17886,13385,13492,44004,40655,42423,31468,37661,4870,43944,18428,4615,46188,37177,17364,24224,34070,41409,8890,43409,5395,33015,14754,43502,39987,8580,26944,11102,48481,10952,10600,3889,46722,35321};
    int b[] = {96204,49903,24905,71006,87520,36014,58214,47250,26606,22629,80294,20435,24239,56606,93392,239,56062,62235,15419,6434,88967,47673,71820,63738,95998,74234,2755,7812,91225,17133,32157,64252,10143,84257,7930,97329,26247,86871,56133,78077,35793,67669,89297,96995,64201,16149,11504,63859,88272,70903,57657,40502,73050,57410,815,25172,65200,21720,77505,86429,24866,52569,86173,63283,30795,14135,5005,25360,59340,25757,6378,89212,38135,63228,53309,93490,42937,75753,84927,31857,6128,13343,63847,45262,58095,87467,74588,97231,86099,64839,45103,76800,71266,33057,45297,2095,99089,24215,63001,32233,63303,68430,21207,4538,23068,85324,23664,52212,67146,193,92261,3486,41795,54115,62736,87941,96942,10493,88290,62875,60357,29432,54574,35885,60705,35802,29225,78513,11654,32,85622,13784,20970,94867,31317,42552,76541,40363,82976,23631,98747,64252,62577,76911,49653,47567,42857,29195,45888,95906,65242,49907,12332,57643,86691,31658,33155,49877,14469,49971,82975,3407,75738,78664,74553,31904,19732,23292,41467,24960,56357,97561,95856,61833,53710,52093,47935,44555,32818,67670,45728,83608,75129,5567,79983,83708,6758,27654,33954,779,88766,41119,93329,73183,3252,86047,55608,73739,31683,19244,6896,63388,46862,76758,44450,14278,2069,3590,485,47883,22644,57856,62019,65023,16997,15591,19839,2864,34313,24043,23532,52925,89481,4532,88205,23816,63887,90676,7286,61492,13082,90272,31758,92032,3564,8983,12963,23295,10278,91828,74910,44294,21733,77928,38964,50954,70180,84484,22230,63879,228,52489,20912,40461,71831,11579,20337,50620,92945,42926,2469,80466,27937,47608,61368,19197,56192,70878,862,87281,21205,52044,91233,68155,64758,74614,537,34421,7031,11023,57649,44218,42194,64742,1677,50065,92218,38166,25247,82195,7244,76912,37096,42888,17329,55132,16581,92469,64872,38278,72474,86055,56102,30800,80057,18262,55068,95733,57875,32547,6926,62897,67535,26202,64051,62503,12256,69456,65490,93456,15262,41862,6872,18979,15781,82305,29325,7671,61050,35435,76590,2549,22863,74616,21468,44748,83346,98156,58915,11510,18147,67820,40927,42976,2512,85053,3950,19195,52771,47270,63965,34129,75488,63751,99628,29572,90889,23344,18381,75847,17120,72089,98159,8652,37873,23948,21777,62201,57599,76697,34176,27346,22596,8630,18569,80439,62281,86891,17872,92560,13664,80118,94608,61823,99974,17331,5609,46503,88521,78512,16244,43705,64388,91083,39152,88684,44424,87679,90187,98704,48159,1309,60173,27787,66030,66051,94259,34634,83254,43391,43566,94128,21468,21357,2822,96648,74273,64890,50626,36993,33312,19221,98475,868,40698,20518,17951,64027,99011,5125,77071,32157,72215,11062,82521,52188,4110,51892,29432,68063,21049,7990,66679,7777,98481,29124,97967,28309,85092,80625,58112,59119,94518,60497,93855,61111,34437,40171,38546,83048,99758,44764,55183,51715,76298,9090,99270,67162,10921,68328,64225,47334,55744,42116,92878,61126,25735,76395,25953,17918,50264,4094,18461,22443,17856,40168,96578,7615,82324,33479,53716,46310,75871,96786,63444,64616,20783,25847,33772,7137};
    int al = LEN_M(a);
    int bl = LEN_M(b);

    int rl = 0;
    out(fairCandySwap(dup_a(a, al), al, dup_a(b, bl), bl, &rl), 2);
}

#include "./890_find_and_replace_pattern.h"
void test()
{

    // char* w[] = {"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    // char* p = "abb";

    char* w[] = {"a", "b", "c"}; char* p = "d";


    int wl = LEN_M(w);
    int rs = 0;

    char** r = findAndReplacePattern(w, wl, p, &rs);
    outstr(r, rs);
}

#include "./885_spiral_matrix_III.h"
void test()
{
    int rs = 0;
    int* cs = NULL;

    // int** r = spiralMatrixIII(1, 4, 0, 0, &cs, &rs);

    // int** r = spiralMatrixIII(1, 4, 0, 3, &cs, &rs);

    // int** r = spiralMatrixIII(5, 6, 1, 4, &cs, &rs);
    // int** r = spiralMatrixIII(1, 1, 0, 0, &cs, &rs);

    int** r = spiralMatrixIII(5, 6, 4, 5, &cs, &rs);

    outaa(r, cs, rs);
}

#include "./478_generate_random_point_in_a_circle.h"
void test()
{
    // Solution* s = solutionCreate(1, 0, 0);

    // Solution* s = solutionCreate(10, 5, -7.5);

    // Solution* s = solutionCreate(0.01, -73839.1, -3289891.3);
    Solution* s = solutionCreate(1234793.7, 73839.1, 3289891.3);

    for (int i = 0; i < 360000; i ++)
    {
        int rs = 0;
        double* r = solutionRandPoint(s, &rs);
        outd(r, rs);
    }

    // for (int x = 0; x < 360; x ++)
    // {
    //     double rd = (x % 360) * 2.0 * (3.14159265358979) / 360.0;
    //     printf("%lf ", sin(rd));
    // }
}

#include "./886_possible_bipartition.h"
void test()
{

    // int m[] = {1, 2, 1, 3, 2, 4}; int n = 4;
    // int m[] = {1, 2, 1, 3, 2, 3}; int n = 3;
    // int m[] = {1, 2, 2, 3, 3, 4, 4, 5, 1, 5}; int n = 5;
    // int m[] = {5,9,4,7,1,3,4,8,2,8,6,9,8,9,2,5,5,8,1,2,4,9,6,10,8,10,7,10,3,5,4,10,2,6,2,10,9,10,3,9,2,3,1,9,6,7,7,9,7,8,5,7,1,7,3,4,2,4}; int n = 10;
    int n = 100; int m[] = {61,82,25,82,81,93,86,90,35,41,9,62,73,82,54,92,65,84,18,45,55,78,65,96,83,85,71,78,59,97,45,78,34,85,56,58,70,94,12,69,81,86,95,98,11,83,72,73,50,79,74,89,19,96,90,99,18,81,19,44,1,33,57,60,82,87,36,74,34,70,29,62,27,82,73,92,4,48,52,74,53,82,51,100,66,84,17,84,7,80,83,99,32,91,46,63,20,54,10,71,4,17,61,87,24,87,63,65,9,59,74,75,40,55,42,53,55,85,4,99,64,67,31,85,21,86,22,76,2,30,71,83,21,48,5,29,36,70,2,82,74,92,53,78,30,64,76,90,2,25,83,87,42,98,94,96,75,99,55,58,38,79,1,95,7,46,11,43,90,93,43,54,31,91,7,85,90,97,50,77,87,98,33,72,71,95,27,62,82,85,87,88,97,98,74,100,25,68,1,80,17,30,9,48,42,46,43,47,49,80,18,55,86,93,66,82,44,70,41,92,68,76,19,55,96,97,45,88,80,100,69,98,32,51,20,30,62,93,30,42,40,57,17,41,78,83,65,73,11,21,91,95,3,21,43,75,24,49,18,91,2,54,63,98,98,99,59,66,21,24,95,97,15,86,76,96,8,9,18,41,67,78,39,41,92,94,55,74,95,96,22,69,2,23,90,100,71,74,25,53,58,77,91,96,34,75,29,33,3,50,94,99,29,82,90,91,76,83,67,93,68,71,60,100,85,92,71,89,59,80,19,22,22,33,34,60,17,28,27,76,28,64,40,96,68,78,58,95,22,73,46,67,96,99,10,67,86,99,84,87,50,99,82,100,37,83,73,83,50,87,60,91,74,81,89,95,31,81,8,86,21,60,35,94,56,57,62,74,95,99,99,100,29,38,24,72,16,37,45,97,74,88,90,94,12,49,30,68,1,22,16,74,7,38,78,100,44,76,83,91,14,45,47,65,58,75,94,100,53,56,59,93,72,99,21,47,4,41,28,62,40,41,34,35,16,50,40,79,3,69,51,52,5,71,6,95,16,65,28,97,15,49,3,23,25,38,47,63,4,16,28,53,3,61,74,96,81,91,30,39,52,80,48,80,79,88,12,41,38,54,53,70,22,85,16,94,58,93,20,60,3,28,51,54,66,98,80,88,27,33,33,54,73,79,95,100,25,54,32,45,33,40,16,32,38,87,1,71,63,85,94,97,88,99,69,79,66,67,67,94,50,62,71,73,39,96,4,6,85,86,23,52,37,90,7,17,11,82,42,84,51,82,2,70,79,84,40,74,53,72,10,15,20,83,44,48,90,96,3,10,58,73,45,70,33,73,70,86,9,69,6,15,82,84,48,69,12,91,24,81,72,75,21,23,36,81,79,93,35,60,13,43,44,47,17,75,30,87,7,83,42,85,33,66,1,57,81,89,28,45,34,56,5,61,49,73,1,76,50,88,65,80,74,82,14,27,40,94,12,63,64,68,44,60,91,92,93,94,32,83,8,83,80,90,81,82,86,89,31,41,72,95,50,83,63,87,42,61,92,93,29,99,69,77,58,98,50,60,59,98,23,88,8,90,80,81,34,80,35,66,56,61,70,93,36,78,22,41,24,76,16,25,34,36,13,86,53,86,32,97,68,70,84,97,85,93,33,79,70,84,47,50,4,21,87,91,34,69,22,32,12,85,36,83,50,69,54,71,77,85,24,31,64,79,19,80,88,92,53,99,69,89,16,91,44,93,96,98,22,61,52,92,62,68,61,78,3,78,78,80,29,72,55,86,1,100,40,72,29,98,66,68,68,82,60,87,57,83,21,61,5,26,59,69,86,95,63,75,61,71,76,97,24,71,4,79,34,43,49,65,4,85,31,95,11,13,76,85,92,95,59,100,69,85,57,84,69,74,57,62,82,89,36,72,87,92,2,40,98,100,1,92,48,88,47,97,64,74,44,74,90,98,47,79,69,94,60,67,93,98,29,57,24,85,52,87,3,81,16,71,17,79,70,72,12,45,16,93,32,80,92,97,96,100,60,90,86,96};

    int l = LEN_M(m);
    int c = 2;
    int rs = l / c;

    int** r = gen_aa(m, l, c);

    printf("%d.\n", possibleBipartition(n, r, rs, NULL));
}

#include "./881_boats_to_save_people.h"
void test()
{

    // int m[] = {3, 2, 2, 1}; int n = 3;

    // int m[] = {3, 5, 3, 4}; int n = 5;

    int m[] = {1, 2}; int n = 3;

    int l = LEN_M(m);

    int* r = dup_a(m, l);

    printf("%d.\n", numRescueBoats(r, l, n));
}

#include "./891_sum_of_subsequence_widths.h"
void test()
{
    // int m[] = {2, 1, 3};
    // int m[] = {1, 3};
    // int m[] = {1, 2, 3, 4};
    // int m[] = {93,379,24,24,29,95,83,336,241,299,102,252,216,375,330,209,68,106,193,161,298,2,369,242,351,114,394,99,359,400,52,198,152,8,118,118,122,43,240,361,114,253,168,7,353,354,25,322,383,112,68,32,293,361,174,140,303,269,185,215,384,278,366,203,261,76,26,37,72,362,26,2,53,136,328,392,170,382,59,255,266,70,256,398,366,359,207,72,95,384,106,228,60,61,188,117,139,384,345,108,84,47,184,24,217,196,156,12,322,50,52,211,98,363,264,224,171,63,161,361,47,44,116,226,136,188,225,188,389,308,167,91,50,219,16,302,147,346,62,225,195,57,275,216,312,376,312,324,233,190,14,91,261,158,339,137,365,42,321,198,309,96,244,261,303,131,90,1,349,396,219,66,281,288,276,237,143,345,201,143,78,147,67,118,73,80,240,137,237,320,24,138,396,146,369,306,125,86,134,217};

    int m[] = {2791,15117,2258,5716,15527,14089,16819,18473,14829,6795,16065,1095,12213,17038,3730,13188,10159,12313,4897,13547,17384,18533,12160,14488,14553,6124,15871,9341,12429,10981,15607,10198,10088,2719,7824,16995,12506,9964,5713,10796,8078,15357,19755,19801,13196,19455,7608,4820,4297,15470,11149,1738,11284,10460,12932,16063,12513,19689,11989,8978,739,11700,6534,106,19443,13613,2137,15883,13906,18697,1576,13691,17376,6414,6459,7111,1358,844,13164,19445,5199,4876,11423,11421,8662,12707,10809,781,17682,16704,7013,6758,13879,5883,4292,8605,4866,4027,14391,6069,14078,4802,576,4679,14510,12100,5545,6017,2766,16019,7597,8346,17522,5552,14373,14309,2757,11606,3647,2028,7607,1618,9581,16209,9100,10796,11181,18736,5699,17608,7582,19948,2269,16761,16910,12414,19943,10671,12316,2247,8553,6320,5768,2438,10379,14806,2430,19426,6184,98,14336,600,10199,9463,13665,253,1752,9022,1490,16394,2598,17174,19287,19535,6907,16108,16796,348,295,13465,15454,19770,16367,386,13939,11222,6363,10419,3770,15559,17625,12778,4684,8285,16061,12819,9008,4874,16371,19646,16706,3355,16942,17314,1954,15518,14239,9653,12149,1235,17692,6449,1819,7130,1334,12572,384,10639,18387,19643,3308,16663,8877,8482,3214,10069,1539,15390,12427,15806,5797,1391,2621,18097,13201,9133,2681,5062,3157,18254,694,5179,14557,10640,15337,13534,10441,12270,9863,9035,3396,13256,9164,12723,16691,17901,17215,16705,18710,940,2818,2264,609,12289,5514,1692,12767,9188,12808,1451,7763,6800,15987,689,5669,7560,4996,8248,18213,15485,16458,10058,3406,15667,11980,10512,6485,19853,11483,18185,6599,16179,19113,1108,12197,7156,248,18198,1316,2155,5200,16248,11164,11143,10581,15237,18043,8430,9391,13147,14360,12198,19782,3563,6421,13565,10806,13736,14727,1514,6032,6436,15158,1493,10669,3133,14575,1916,8093,11658,17825,19171,15341,12712,11179,1669,8327,18889,11104,6097,2851,11935,8823,381,1494,12484,19034,18154,9226,16924,14791,5900,17149,10860,9889,8067,650,5642,18784,2144,3549,17432,237,8605,3808,18899,17716,15240,984,15506,4782,8934,9735,3807,16812,12287,12910,1677,19284,5565,7817,18619,2410,10544,13077,15516,17905,16636,406,10938,19216,15353,3767,1020,4971,7991,4247,5338,18304,17563,7455,2615,17714,9510,12600,6461,14253,3092,952,15199,4679,10381,1018,7045,1791,4936,16584,11565,2809,18013,14189,16986,8087,14134,15289,8658,681,10368,6400,3463,19036,19822,4531,9271,18912,19556,4154,17351,13916,6067,3947,10561,7368,12840,12170,10067,1845,3001,15382,16485,5341,673,19968,14984,14255,10507,6349,13850,958,8037,9802,7283,10004,6705,1350,1234,19313,9922,3434,12402,12648,19246,16100,916,19058,17550,2686,17577,15196,343,10081,14880,15517,9506,2162,11098,4159,19060,1275,6613,11676,4354,18933,19632,1533,18892,401,8472,7966,9257,4346,15176,12529,16426,12542,18192,2068,15976,419,6709,8730,17211,15794,4528,6832,10178,16435,16090,7798,2727,10560,16061,4668,16723,15498,5097,2065,14449,484,395,10909,15286,2588,5961,12533,3079,5411,11727,17103,10152,13792,766,18630,3450,4609,5454,9713,18172,14548,13144,5173,6394,4073,17568,213,7332,7728,15840,9766,12534,16151,14372,101,14878,8426,19681,9226,760,9641,5657,17830,795,5682,12288,11565,12362,18111,17572,15781,16197,7254,12425,1508,16932,11993,11300,7856,18842,15376,6699,16819,8732,2003,18502,812,9644,1940,14485,15762,16295,11304,1012,15761,13242,18728,19502,14988,4049,11064,5392,1489,2678,2500,13966,18536,2388,13744,15557,8335,1716,5055,36,6436,16175,3028,11896,6425,15068,16647,15552,3037,3777,3927,1396,2771,16080,6932,7763,14489,13595,801,7781,19719,4201,11343,28,10396,15781,994,16870,9881,10483,2444,651,19697,17668,3155,5960,5050,3042,1647,3360,17053,7019,14947,5901,17214,12200,16042,10070,3317,13825,14101,7834,13968,9933,17284,11848,8805,5320,11762,11467,17289,16564,17931,3106,18179,9378,16101,9014,15551,17602,9068,7831,9096,12058,4302,16954,16991,9685,3328,12860,16463,17455,18642,15377,17776,5014,15355,4313,250,10275,11340,3684,1012,12308,14704,12275,14814,1918,7927,13899,14634,742,7278,539,12792,3474,11594,16507,17816,18043,5236,16897,370,12538,265,16647,14702,1194,492,7129,19889,2570,16936,7415,19174,2056,16718,1984,8142,5768,17742,5352,2274,19651,8155,14616,12106,6834,2078,2728,14150,5896,15034,2427,13596,12087,1569,17179,9643,6901,5196,17239,6228,2954,18259,11324,5866,14598,3551,2731,6516,4854,14221,15420,18566,17647,19584,3145,14783,11129,14737,19657,19156,9132,2105,5358,3866,12759,4956,3240,9593,8722,2105,3299,3571,11078,4089,15682,10607,13429,6583,7032,15574,8647,15671,14302,1248,19822,19150,5459,12764,2460,1179,10983,15466,365,2010,5593,13549,780,18201,12131,3255,19058,7129,2805,10173,9714,13141,12489,12896,11446,10069,14851,14085,9656,19444,9145,13364,430,13884,8054,1326,17155,17035,17001,1399,8844,8433,13561,5131,16218,11956,1530,14672,3091,2638,15640,2176,4362,2572,11184,2122,3294,5526,11400,2004,3265,7430,18392,1900,3,12850,11340,1846,13075,16504,12283,6134,6187,13442,6842,6844,1488,12362,557,10014,16567,15417,13757,8585,3184,7370,10440,18420,10276,8719,4994,5595,10316,11333,5615,18826,27,1154,17805,11015,1401,2080,878,10259,4191,13305,13212,4320,2738,17134,10684,1902,19364,15314,17162,17010,16260,5469,3819,5449,13792,9038,3362,1929,7544,9292,18309,9905,450,1484,12574,15112,17225,1820,10061,4099,16961,7675,11292,9738,10621,7174,7364,3023,8360,19052,2893,5321,7892,14599,13827,10735,13172,428,19429,4747,19244,7289,7171,6137,15707,693,16422,5556,1543,17582,4359,9479,4195,16766,11209,20000,14831,6077,10752,8179,6149,18012,4652,8512,3146,7799,14692,13978,4325,8790,11905,6991,14497,19632,16503,11203,2264,11511,15100,6099,12679,5239,7474,1888,19931,17746,15398,7575,8719,4412,13052,8588,17817,12720,5807,10885,7988,12020,16098,1174,9974,2661,14292,5001,18229,18085,15022,4872,13063,12797,10900,11163,13808,11187,673,6338,6151,17802,4931,2122,15931,520,9629,10602,8246,3608,5177,5568,2269,19339,13341,11059,5138,1516,4145,17248,11875,7846,2709,12619,7119,4477,9146,4344,11725,7794,2044,10547,1013,7429,16016,10900,19721,19077,7189,16481,13012,17494,1685,18557,15402,4408,17228,14686,6549,7512,13027,4806,10613,4343,6147,17282,14143,1095,15456,10862,19799,11240,17148,11856,2787,2518,18102,1759,17891,5317,5275,18146,14537,11557,6195,2496,8765,19637,17577,15723,3882,4629,17333,8464,15722,14144,17566,15885,18348,2025,19442,18298,11845,7708,5066,18446,8130,18910,11870,1363,4267,15316,15130,4716,12089,10616,2947,17639,11544,7908,18995,3167,11327,18983,10700,6590,10583,11874,14047,19650,14236,14788,6600,6318,5275,14962,3088,15471,6094,15828,10451,2134,9297,13804,1317,1981,3993,3494,5635,15646,14548,8772,9851,8181,16700,5290,853,14755,4880,15287,6815,6376,3922,19887,18886,14923,7855,6414,1701,19911,8995,3853,8030,13012,526,12518,11129,9473,17120,10352,6029,3574,4635,15989,13424,19125,7952,14181,4169,8562,4997,9685,7360,5294,9690,1912,857,13871,1951,10741,7533,17689,19987,409,6395,5305,6905,14750,4295,9678,16486,1972,9194,17454,17053,2582,15687,19778,19430,13793,7225,1881,16998,2626,11394,14265,5725,2640,1031,16833,9290,12948,3589,16298,17953,14034,5948,14139,11231,11381,15757,2490,1075,3684,4355,10592,5160,16827,1013,9377,8927,16542,10491,14425,13174,3636,159,11841,4989,7351,10146,17950,165,16418,1307,2042,10045,4492,729,8531,18542,7358,10534,12501,3796,4231,7807,12233,1200,16410,6737,16455,17177,10217,11189,17740,12823,14907,15294,19806,7003,13181,3774,17641,12288,9558,1056,10547,16451,9732,12860,14528,1675,6800,15765,4555,11615,13782,17304,11052,19094,12368,9326,10658,5402,18825,6201,125,14987,7030,2744,10692,5710,12793,5528,11037,9623,10147,19748,10018,6892,6907,211,9163,19196,3191,2113,9116,8432,18663,19619,9311,19814,14184,7949,3643,12779,14755,3560,13903,10932,17275,10770,13527,10184,13581,18331,4812,8376,6844,9513,117,7650,5079,1573,3812,1608,15654,14756,19220,17069,14598,10852,13952,10802,16343,10002,5289,18340,4291,16649,9974,14637,8204,5737,15677,4724,7543,16962,15666,4908,10290,7192,7761,5767,11061,17315,1482,16547,5831,5645,13051,10461,953,7776,1258,911,17335,19883,9590,18844,8239,3555,4370,11666,2444,15456,9061,3319,16878,18937,16329,16736,4763,15098,15703,10811,9437,3111,9071,11509,12550,816,16397,8838,16139,5532,12689,13783,10326,19486,8079,8497,5237,7761,10720,9482,2561,10077,19855,13209,15504,16529,5752,19304,14462,5822,4168,3273,767,764,4264,17467,12941,13797,2524,7841,8855,8241,10262,15475,8605,1728,210,9071,9481,11622,6388,527,2362,17052,911,4014,13103,7290,6726,13408,19226,14777,11019,6137,12785,15754,11560,5807,12477,8710,235,13933,11810,18210,9313,2164,9977,9507,15583,10428,15838,15421,2684,17108,2755,18683,5129,9186,2409,13963,1503,18135,18845,3482,8163,2406,4674,12143,16885,1656,14577,11256,13172,2963,10303,16844,15798,7560,3542,1337,3711,2099,11255,12216,9359,4524,15817,13367,15411,14740,3318,13649,3197,17164,9958,17772,13031,19132,18701,5355,9827,8501,910,15227,6579,7941,1569,10670,6494,4104,19119,13885,19409,19625,16173,4601,19347,12244,9223,17963,9263,4448,7023,7168,8764,14818,4057,19196,12189,19136,106,5554,7566,9340,15709,17057,8716,7619,1702,14912,12443,1094,18150,17222,16005,6302,13570,12243,7064,2624,18029,1734,5902,6519,3546,16797,991,9773,1830,2626,15447,12872,13071,19789,11401,17063,19830,10130,1435,11509,6711,17648,3431,13021,9423,15735,3982,4607,10098,8820,8353,16597,560,9146,5454,19462,389,16834,10557,13152,2046,9329,18335,17128,17925,2572,13378,18849,15034,365,16623,18145,8833,17534,15837,7405,7039,4346,7352,14930,3334,17340,4104,18204,17103,4947,7665,18859,11756,18820,3408,19301,2548,14600,1976,12328,12118,801,4683,14053,14159,9376,4030,3632,10222,2353,2610,5182,16006,18519,10011,13562,7523,1546,11199,12905,9634,17482,11973,5652,17200,15884,1274,5619,9046,3933,1926,1942,4582,16299,3194,1066,19093,7919,19807,1368,12152,2278,19023,6938,1262,4415,19011,19994,19969,19435,6555,11159,17412,8751,14423,19243,7845,10085,5546,4417,8330,2882,7786,12505,480,15471,15360,4400,10692,14050,5798,10075,10714,237,3590,3471,4174,9625,16959,712,9866,3749,14819,13281,6159,6282,2359,3897,4,15298,14213,646,16368,16253,12883,2786,13487,15833,13114,11460,6071,16097,14576,6417,13550,3793,16976,10686,1162,2139,15193,3772,13444,10480,1959,4459,16550,16144,6922,17603,2184,19831,7068,12656,5862,18975,8969,971,16129,14549,12831,8143,2636,14178,9150,12233,6912,13937,11960,13633,3204,10421,14644,11948,16987,3671,5314,10127,15774,12019,15743,3320,12946,2170,6213,14232,747,13443,12024,3712,2222,2673,14152,2083,4110,14189,1308,8471,9598,12364,15894,17276,16085,14237,1376,7376,12339,19792,19107,2509,5226,15147,1042,15038,9371,1074,17478,15814,7763,1670,8438,11260,1712,3600,16049,11877,3720,5023,12751,11478,1110,7987,4110,16868,16665,3369,2792,3857,5460,605,15505,3616,6489,16620,1827,2952,15958,603,15790,10113,9348,13071,13630,13046,19159,10177,6858,14406,520,15277,6620,10023,16538,6162,2776,11082,6768,15887,4333,845,18937,17519,839,19502,5394,7338,758,14938,4176,18861,19526,4059,1437,19185,12118,7692,7277,19266,4571,8122,16334,16494,16334,12033,2346,13595,6297,6878,16921,215,2799,11643,19299,13544,15150,19614,19876,6825,10411,4574,13352,6214,8942,3127,10004,5190,13337,3712,8798,16366,12227,19252,14961,15401,4300,11385,2418,1205,18901,12978,988,5004,3192,19655,18791,377,2686,775,11462,10092,2648,18954,17363,18321,2860,8184,2122,7641,6673,8601,18830,7789,2518,4881,9605,3392,13433,17623,9903,11680,11745,2548,12488,3601,5367,16248,17450,6788,7698,8327,5819,10474,19411,16698,13793,4853,8097,16410,12056,4091,12450,5501,18415,5893,10243,8720,16082,12542,5038,2907,16143,18374,2430,9091,10100,19442,5362,9667,15745,10353,18980,9890,11980,19726,16467,2555,2412,2118,5861,18884,17739,16644,18715,11216,7830,7948,279,19705,1307,13757,19547,909,19108,14356,17332,6568,7025,9472,6110,13264,4345,7775,13101,11596,15261,14010,7960,19355,9064,11101,6297,19870,13259,11923,2341,17524,8914,19256,2310,19813,11982,1026,9401,7482,3711,15959,16403,11648,2479,15705,18600,19345,15336,2822,2251,12738,15503,8234,13250,19550,7159,16192,11281,11467,18407,4469,16984,14519,12934,16863,5525,13930,1007,14298,10620,13398,17615,14672,2516,2809,7916,15723,7419,12627,19781,8760,9001,15437,16640,8628,4079,11613,14335,10344,17405,9814,8989,2330,2102,3020,14727,4062,11642,13742,6761,12444,14959,9200,11922,6564,7713,18658,3219,2155,947,557,10505,11290,16109,15111,229,19529,92,12702,1533,14167,15549,16646,257,11253,13249,9997,8046,16823,12123,15652,6681,17830,4913,11613,11577,1997,8820,2743,9270,11998,10503,3488,14695,13331,17967,12885,4856,12339,3581,8626,1677,2324,19003,8824,5981,2710,14890,14163,17735,1674,2365,14373,10184,14364,8296,2246,16039,3451,17553,8461,3351,1905,3337,10362,11551,1580,14181,14895,14218,9771,6818,19664,11517,17443,8660,4121,14696,3074,7493,11319,17183,13705,100,8623,7618,12673,7240,7244,382,5039,12090,11593,13326,3276,8488,12200,3625,16306,3137,4425,327,11243,15987,2100,18529,1044,5743,6291,2277,19325,14192,12346,3737,12439,19360,19758,8466,13178,3462,64,7716,5231,5948,12886,4606,11050,15623,19564,13250,18905,9125,5702,7516,11496,5260,19137,4590,9176,6196,17512,3769,19118,12539,13016,1103,8753,16806,13051,5524,7004,2431,3069,8400,11801,3497,15724,19862,7664,12556,6621,7103,14966,10094,17985,11912,5974,9908,5859,9504,7446,10800,4919,18631,11346,5253,2062,11676,4488,18920,8368,16082,13630,15016,19490,699,421,14386,11332,13960,5798,7882,13362,17725,12923,19988,16449,4104,2104,12862,16967,2249,19529,6474,11577,2614,8643,17676,949,11638,16273,5174,16962,13127,1217,10130,8417,17484,14248,16841,19046,5617,17934,1716,8798,3173,9790,18266,10505,10268,10110,13853,16135,3156,4488,12769,1541,8815,5651,18864,6706,7148,9619,1114,1696,8942,8595,3113,2582,7451,5919,7646,189,17559,9287,17142,16168,16163,377,13173,8402,16218,19383,18049,12754,16340,17582,3765,10875,15759,17689,3276,3657,12233,15790,18870,5118,13551,11823,5444,6239,18121,6250,3994,3667,14423,12806,3582,5733,8988,279,12023,3170,17144,19183,14501,19337,15674,9746,1121,16933,268,1760,14247,2618,14144,3516,11263,9600,10756,1301,14271,10628,2734,4494,13172,14051,15940,15850,6859,16129,11959,10204,2556,16130,14507,1218,10136,5433,8385,17668,2979,9887,6709,16700,2957,7917,14234,3691,16622,15967,17924,7883,19302,7420,8923,2015,18547,11234,4969,7268,7821,1774,1979,6757,12766,5778,14983,16022,2993,13808,6733,5973,14692,213,10018,411,10780,9569,2746,19631,8861,1342,9782,35,5871,587,13182,16834,1967,19760,16204,1956,3271,2640,3890,4243,4461,12517,1366,16610,5689,3746,19032,5887,19842,16876,16773,10166,4752,2385,16576,13224,4420,12341,10902,7706,920,3745,5469,19063,10757,15452,13013,12116,16040,16669,9864,9289,18455,14590,14853,2278,6408,2679,11464,8106,1731,18905,7010,16263,19572,10014,12871,16097,17366,1483,18107,4243,8941,13617,13176,6124,3866,2925,8947,17902,7251,10873,4595,2806,8721,14595,14522,7658,17099,8394,11323,9629,19044,5804,8924,1898,8195,17113,19015,8699,7244,6207,13753,9853,18033,7963,983,19075,8220,5711,11487,19446,7223,6514,10048,419,10920,12299,8840,10344,13280,1252,11631,11332,850,5875,8304,11574,1853,19781,17970,16250,18515,2012,4728,1535,18,12214,8873,2157,18614,16525,9644,918,11522,12764,8923,12884,9743,16891,18748,17668,996,8361,4506,19346,5129,570,12364,13938,11165,18488,9285,2737,12047,11370,15629,18725,15715,16199,2688,1769,10432,1525,2130,6103,7989,11998,15550,4367,8451,1822,18113,18631,3119,12430,17951,15783,18299,3700,13181,1237,10837,12636,185,10318,16054,3779,114,14167,14003,16894,10550,6255,10561,3487,17098,12509,19410,10410,11734,11639,15885,14883,13622,3379,7463,10356,18449,12423,10499,15533,17028,176,13882,3871,10605,7475,4795,14587,14331,2813,2058,5922,11066,17595,5982,13500,13510,18420,3377,2282,2165,5552,10262,8822,15305,773,12913,15952,10611,1409,8990,14762,6515,15391,2830,5982,11395,9852,15745,17580,6713,9648,15213,5137,3166,3508,17508,4725,18249,13531,9486,13236,16930,7644,17266,16372,12702,446,71,17242,17615,14798,10019,18999,953,15956,17469,11065,902,8029,11405,11963,6137,2963,2468,11341,17369,10779,6903,12780,5170,7855,8638,8104,18829,7812,10548,13333,10717,18973,5931,2670,5793,13846,9772,5291,13415,544,2750,17841,18146,9005,12935,19972,14029,8164,14176,10618,11567,366,12741,3301,15351,7521,6566,10692,13228,17788,13318,1390,10169,1049,13442,9337,14920,14337,9278,16655,1647,1452,12459,15739,5148,13261,19003,11624,11700,4369,2187,3581,11732,11874,3728,17104,17772,11418,9392,478,607,18485,3213,17439,2593,17473,9537,17672,8858,18800,5353,19066,10916,1857,15726,10927,3490,305,15537,15762,16447,13230,10496,17195,6753,3075,16270,15389,901,6030,9770,3325,3666,3223,16560,875,1702,5939,6096,13968,19340,19312,13278,19408,15780,15679,3398,4732,813,17330,13474,77,17528,4457,6383,2379,8637,5863,2750,6680,2696,14115,18680,2845,1022,3247,14909,15064,7242,15877,400,2534,4469,14645,1313,11409,2771,5368,10587,3263,7478,8177,14480,2824,13490,15459,8803,2739,6665,19668,12183,1743,19288,5365,8863,16590,12149,8956,11518,4208,10199,3736,18136,14950,14725,2727,4501,6814,6045,8567,6135,15785,14189,317,12528,13341,17402,41,15285,1531,15980,3979,5350,15869,5605,17282,2285,10356,10302,7725,11166,7315,7794,19403,17529,12783,12307,17784,13051,8239,8648,19954,10304,6052,11171,14296,4540,8126,7062,9152,3714,17189,13745,11679,10600,4480,8587,824,17883,779,943,6471,6530,8266,8934,13882,15243,14053,8656,3355,11242,6440,5080,16285,13944,11503,12427,5152,15072,18983,8208,7887,16981,9864,7191,18017,9589,9667,11861,11044,2285,12789,5743,15840,2453,6809,9722,11581,19037,15854,15587,10434,8991,3571,1720,15946,13359,16608,1405,15871,14792,13246,11143,4592,170,15862,1832,2958,7662,6769,14592,18440,2479,1674,3264,405,15455,17056,9362,7911,7687,6398,8393,1337,5416,12614,6920,10293,16731,11319,10599,4814,10769,12808,10572,3689,15854,13820,11952,17148,18619,1624,18656,11908,236,15012,17430,19193,1256,15064,18307,16338,10567,16786,18333,13393,16657,11400,16451,17703,719,5893,13108,11551,5466,14620,8000,17923,15752,14220,12852,16819,2109,18873,8644,10284,11050,10772,18598,3952,4,6250,2009,6148,307,1753,15743,13726,16084,912,6129,16951,13697,1388,13241,5998,8020,13566,10361,18783,17734,6334,1858,2077,7889,19645,10523,2972,16893,2279,11933,13799,11591,5306,13896,15310,7541,11719,12604,8753,9972,14800,11963,7621,8818,5227,1781,9357,1221,18002,12182,5845,17795,9753,351,6532,8400,7236,1624,10947,10986,16330,11816,5836,12059,19005,19570,13660,1050,5210,3245,12856,1134,12713,17886,9773,15315,1644,4170,7593,18180,15753,16826,9709,15380,3616,14233,9380,10059,5633,18412,5483,16049,14735,15882,8965,11280,10562,5970,6222,12230,6923,19813,13668,11387,18946,16131,10575,3159,17770,12399,16292,12832,17911,17661,13117,19655,6931,11817,644,5162,3384,18183,16429,15852,7366,18166,11379,2834,11824,18814,15418,4824,8905,8323,13823,6876,18405,18659,15768,12503,8718,8323,13576,12139,15728,3288,9815,8470,10507,17222,11878,245,12980,3521,6805,9455,16155,8184,5434,843,1288,10194,15511,18253,15086,5064,16544,7208,8934,3998,19351,18903,17041,9285,7379,4031,5862,5726,11883,4840,13586,18748,12830,522,3202,18182,1582,19002,8189,17608,5127,12624,18893,2849,8085,9920,6702,14873,14320,3310,1197,5538,13261,4853,5998,9034,18213,5375,13107,19952,3150,19187,5424,18080,12162,9353,17547,3039,16357,16134,19138,10152,19429,16947,14877,5353,5857,7755,19,17172,6474,11873,19105,17284,2299,3229,15316,7149,17638,4941,19874,9777,19203,2378,5662,18123,8008,120,6788,16566,12995,12972,12254,19475,12648,10736,6304,15992,1007,1199,4386,1797,69,40,2210,10017,934,218,15188,15094,18985,1553,1369,3965,11479,17063,3973,11162,7702,7990,6302,10707,13986,10076,12955,16523,13324,14227,3029,7937,8332,4890,1131,11063,13264,14043,4477,11490,7251,2673,19051,15055,10755,13011,18931,2156,15624,9300,17669,8099,11769,14438,12409,7987,4248,11301,2384,9613,9774,532,3024,8347,14252,2304,4012,9799,11091,8150,18197,10235,17484,18531,5279,8950,18443,7237,4806,8023,13996,11289,12181,14533,8804,4071,18958,5660,12811,6918,6666,2522,19611,534,14475,12565,18804,16851,17721,18271,16391,794,3686,1211,18967,10989,1021,1977,11651,15898,2472,17813,7978,19495,13198,18564,12293,10003,12455,13825,1937,136,9828,19651,17796,8993,963,7695,1876,2986,1378,4615,8268,8858,5245,6501,11179,7641,5255,4955,10512,16731,2605,14850,4720,16005,7233,17946,1041,9526,13178,11675,17779,18657,8860,14321,17076,12050,2382,1279,17726,17343,4575,8719,19647,6860,12810,5189,1415,11271,267,2554,12448,16024,10361,19040,18805,17091,7011,9198,18946,13506,9684,18823,11677,638,12015,14581,2807,7159,12140,14237,15811,2508,16508,15639,14184,9603,7222,4935,13187,1602,5848,17393,13781,14018,7031,13818,5095,4077,15659,1944,11102,736,15034,16981,15670,17893,11751,3751,1233,4885,2026,13706,1055,558,17644,19819,10161,4615,7904,12863,12150,17926,7241,15034,6675,5358,5435,18133,13745,4079,17167,9543,1088,15450,3492,10543,18867,372,13451,19695,9001,18290,5898,12836,7357,9935,7734,6828,9644,18023,13669,13135,14729,17284,2877,4486,407,16385,3180,17920,10381,19926,9369,16232,18936,11627,6674,6851,17432,11440,4488,1648,6327,7611,2280,14303,11740,16187,18728,8121,1522,10616,16349,16245,6868,17715,14247,14738,16329,4173,3452,15115,1421,13449,2744,16981,13126,10925,7374,2961,8808,19870,5014,6449,18295,14834,6671,16721,14631,5937,1965,18551,79,12643,12762,16920,4494,4029,15230,13508,7073,9140,13891,5235,12438,9935,15858,16518,4672,18315,16952,2258,16207,3083,16199,1935,11746,15915,14361,18815,17279,6057,16869,10628,15498,13797,7547,12352,3510,6612,5800,2052,1448,5828,10136,16788,9401,14148,1397,10356,1421,1812,5602,5974,17855,19642,4695,9410,19794,7414,10733,18363,7473,15324,15744,14697,19525,3919,2125,11305,8220,2723,17313,6420,10073,2429,9912,1161,11192,2554,10305,16575,8564,15408,11029,9535,14867,13719,14291,16526,11696,9392,231,4086,17241,11723,14865,12557,327,10430,16649,12582,12427,14966,4188,4973,11380,19478,18809,6010,14698,8134,11942,17925,9269,2620,8071,5479,12436,14810,6697,625,16825,130,8338,5680,10535,17837,15091,13853,16840,9206,15679,12479,4453,4108,9094,17964,3547,9294,2049,1391,17597,12096,17783,2441,17867,17220,5850,13254,19330,11324,19864,9032,18517,6752,16935,11274,13448,8271,10167,9632,12770,8144,12721,10929,19419,15113,1720,11472,14768,16578,3849,9053,13926,16686,13506,7449,10803,5931,18504,4908,8281,13895,8798,14514,3937,486,6884,12924,11514,5231,12635,12383,16453,1463,18682,15215,19930,8180,3719,4269,10912,172,13972,17205,11748,19943,3146,1941,5085,1161,16872,7855,16639,14128,5388,15117,15467,3852,16339,15107,10706,2081,4546,17116,4951,19644,18588,7883,5633,13002,13323,18606,12438,2800,3940,9152,6509,5741,15252,2703,8609,15682,12504,3133,10966,19320,8475,17733,715,19615,6885,9773,19353,4548,11220,10943,6923,6647,19822,15980,12014,13727,15616,11094,19312,2280,16463,8793,3915,8598,12649,15916,2654,18704,10138,10547,13723,19374,4460,8742,12749,7703,14835,3883,16608,8369,10,15356,9577,1493,5742,8995,12212,132,17531,18724,18586,17657,10710,9961,13408,6936,10947,6343,19051,19213,3485,9687,1451,18115,9001,11161,3100,703,2809,5626,3688,9431,5284,768,3351,11795,12791,12359,6292,1,15619,11593,17419,8814,14183,9787,16368,10241,19693,15145,19761,14751,2554,7380,6345,16287,3014,16560,1965,10856,8155,8295,12393,2484,3695,18779,4398,6623,4075,14760,10853,11595,2210,2832,7013,7938,5533,4843,8057,15962,8254,12693,16598,15907,6220,10035,15490,11855,2767,1011,1453,19278,14694,7294,4249,15067,9070,12826,19566,4100,3062,558,13337,16337,8173,2402,4460,12791,7524,19125,15951,19732,18012,18345,17358,19021,1753,7098,13569,11791,19316,4184,2760,6601,6693,10301,5886,6117,438,14642,7348,2474,9662,7955,834,15516,17432,6676,8380,19164,6125,4808,3072,12338,2743,7390,12979,18341,8969,9972,18914,10007,12064,1649,18595,10983,13843,10580,8200,17930,15898,4895,13290,14192,18453,2298,14486,6142,16511,15207,9211,11898,5971,8362,14277,2840,5066,13204,15690,8476,4611,4998,8108,18878,2015,3957,723,16799,14687,12226,4060,3747,6373,16838,18614,11067,483,15171,3332,13630,7429,10571,19008,3762,3189,8091,13762,74,18009,6006,19174,14212,4721,3162,1338,2543,7146,11180,4125,13761,16720,11730,551,1853,2645,4061,19360,15102,10799,8098,13850,11528,14209,543,1356,16033,18088,7673,217,5135,19858,4413,7670,19218,12755,6851,8656,15589,12116,9777,3007,11763,3156,7305,6958,18509,19016,17236,7759,12802,10258,19250,16569,6084,14508,3147,3588,13515,941,14450,5466,17906,9837,16473,19901,167,16391,16979,15448,8760,7495,10940,4758,18089,9204,9157,15823,9937,15961,5284,9029,1325,18715,10524,2109,19160,10038,12654,18451,14305,13288,16552,1726,15072,7162,7416,15298,2760,17841,6513,15086,13647,15538,12226,847,16725,12191,9128,11483,9612,4392,12424,14800,12886,18055,9144,5549,16588,6778,17396,11100,17110,17061,9634,6511,2884,1452,13283,19269,11491,2069,4990,3771,2058,11947,10469,16010,2748,15148,12881,983,8762,8896,506,11221,10055,1641,6279,15702,18138,12976,17623,8726,12918,13820,15455,16849,15445,8361,4659,985,16103,8098,7545,18064,19606,2888,11816,12359,14828,10221,13829,9336,662,2610,13278,1171,7532,18075,2398,9032,1423,15569,6858,5983,14069,12851,13541,6432,18655,2402,6652,7056,2506,5417,17432,7445,15981,18881,4471,8908,827,1304,14502,14914,14084,10769,2882,3809,6260,15282,392,7563,291,13170,6973,4787,9763,10449,81,15689,8338,10455,13071,14679,16012,46,17440,19887,6035,7347,16358,7819,19267,3730,15523,3243,6310,12672,5881,7178,158,12792,14212,5844,11282,589,15140,3699,17420,19504,18756,17994,17581,19200,15256,551,2375,9664,6336,14492,3155,5044,12620,14334,8278,13439,12580,2975,16516,4335,15316,329,4036,3284,11640,10679,3067,3645,10994,13748,4696,18035,17796,7946,7821,679,1110,5652,8417,5533,14032,1162,8117,19959,18309,494,4637,15761,9941,11575,8391,6184,12368,13020,13080,5175,12837,15364,12619,15552,9343,9741,5575,13650,10496,2782,16748,7442,8559,3672,10176,6698,3378,16723,294,11646,4535,18246,2131,19597,15692,5207,1555,2016,16907,10697,19755,5976,12200,4223,17705,14134,8385,3144,11456,9277,18339,12942,8567,5156,3289,4661,4112,6662,7196,966,19514,2888,15654,3431,15719,16622,8156,5589,6141,14093,17539,11904,15924,4395,641,6340,955,18308,7156,10538,17665,5411,10335,181,18947,14120,10860,16099,1828,8821,10502,7968,2447,11658,1840,3977,18654,19792,6801,10973,18525,3484,19958,8146,17313,11982,8991,8037,18416,4115,12592,2854,3439,7354,13544,5141,5262,15386,6913,13595,7543,4379,5031,12624,16499,19773,6261,9024,15393,1087,4158,15275,11179,3602,11237,2684,4257,19398,10838,5518,1159,10129,10019,1441,7366,1561,19987,8895,14916,16841,15399,3986,2321,4989,19274,8701,19985,17412,12046,4354,1229,2430,14515,13529,17556,17822,8969,14934,17224,14495,2274,12324,334,14340,14334,13261,18004,11211,15365,5000,17640,16280,15597,14429,12535,4475,2409,7413,9635,4684,11749,14616,481,5381,15352,1654,2833,232,19866,13812,14322,14716,13716,9308,15034,4992,3742,5423,13601,2304,4023,8366,17553,19829,7749,414,16358,18202,4380,7580,10462,15833,12169,16629,17164,3906,13244,6598,9923,14797,19939,3170,11706,11726,11415,24,15168,7268,10575,4987,10276,6019,17919,4273,6596,6604,15714,638,4947,11751,7128,19027,19049,9006,19372,8136,16733,16321,12302,11514,3323,13261,6670,8625,2677,18222,722,908,9181,11116,12871,17359,16465,6284,13295,5194,17528,14611,18344,10199,17905,5818,13238,10072,7552,3464,2820,8127,5055,13284,4429,16077,19667,8710,5618,2665,19711,10471,11688,17959,10974,7996,7000,14431,16367,17174,3047,11683,8269,660,3276,10471,13286,18320,14094,18471,5296,14054,6799,3519,129,12949,8943,1905,9523,16992,3025,9643,5538,8256,2436,18129,10578,14012,15828,310,8746,9369,1072,6807,3061,19904,12140,19603,856,18955,6172,4616,5226,5730,8734,14860,18451,7507,9841,15770,1990,8059,16233,8962,6465,1798,799,14410,15302,11173,9334,8193,4003,1166,12300,14968,5482,18384,4996,8396,1330,17242,9122,4,9903,15608,18302,12808,13601,11663,17799,2587,4965,18412,13355,16223,3596,15034,8962,2287,12636,14392,14605,4800,19602,7543,6535,8791,2179,14103,12111,12621,4477,1219,11121,9321,16215,15468,1348,235,6936,6595,13830,7689,5211,4290,8999,12654,18643,7200,2470,9200,13184,16425,5333,17952,10281,12410,17561,14353,18954,13125,7841,2130,14077,7801,12361,828,1172,10439,5024,90,378,18119,13296,1827,18028,1310,3010,2221,18530,8043,18393,8266,16873,11145,2059,18245,19858,4044,18279,18217,17913,1689,1327,3081,4549,7013,3335,3511,3538,5874,16705,5128,13528,10027,7404,14164,3616,4935,19767,17364,10911,10838,9649,15067,2475,11084,7478,12974,6078,13736,5767,11600,13984,12058,6177,13543,131,10890,1954,1143,12990,12488,7825,10804,9147,16054,8846,17382,10706,9939,8355,17474,7302,16104,11569,4592,9904,15000,12706,8533,15172,19644,6897,5984,3851,10000,11213,15159,3485,9277,19504,4572,1608,16411,927,3332,11280,2561,11804,8844,18916,1292,6485,13225,14658,10059,5401,17741,3530,14632,2017,9425,12993,10295,18143,738,10381,16198,15772,7452,5948,9800,15222,18011,17822,9442,13500,50,2006,19833,3325,18774,8882,1407,18629,1626,261,8034,18397,11731,6772,19237,92,7808,5207,18030,10479,14010,4579,1629,14183,16215,5900,2620,10366,11452,5803,18515,7723,15072,19644,14181,1687,135,14990,7095,16793,11360,11793,9906,3724,10258,6406,13051,16276,5588,2343,10276,3316,2523,17215,701,9564,11959,5092,19756,3977,14539,16545,7645,874,6783,10606,16711,6253,4314,17621,1078,4954,3725,3707,19847,8187,11587,15242,11363,14355,3057,7432,13738,18318,13013,2117,11723,8391,17541,16308,12395,12540,18913,4321,6726,9895,7971,1923,6572,15449,3708,728,4901,7539,2764,16924,14762,8103,11733,17058,18194,11497,2637,1403,18787,7584,6367,2485,11767,4068,7739,14064,718,12469,13171,15015,17045,18834,15480,13449,2906,15089,15906,11790,9757,10131,7181,13948,10134,12480,16475,1441,3173,11703,12600,7920,3512,1845,19639,9985,13834,837,9273,6053,15354,10507,8828,3753,13051,10117,19698,19600,11928,19302,3248,11488,14379,3185,18678,6520,11259,6479,12408,565,9721,13859,13703,19007,16552,2573,13023,2718,9777,19632,14806,16601,5901,11664,17688,9400,4466,7692,10882,4863,7564,6450,387,7467,8243,7689,6631,9727,8808,1221,17822,1934,6713,5454,4701,14127,64,19737,16455,14235,7643,2920,9974,6328,3177,13330,8679,17251,4451,15069,10640,19153,6795,2436,1044,1208,6501,12188,8735,10035,3739,8633,18792,7295,2383,5656,11014,15348,18492,3465,8576,11034,2834,17253,18255,3346,8489,6788,1905,1502,2666,6108,15856,3348,15914,17575,10985,2101,9338,8472,15304,11615,2777,3667,6325,526,1670,1401,7870,2318,18041,18624,6157,7054,15590,10949,4813,8948,6978,6593,2302,7989,5965,5455,5493,4923,17866,3541,13525,17874,3067,6863,9729,13147,5582,6238,1618,8526,4319,16297,7153,2051,10046,1847,15575,7355,17787,13841,13577,10086,14555,18071,12950,11202,16582,9302,7420,6414,6595,1515,13867,2854,19764,1959,14071,7431,9102,16031,14326,15488,10897,7180,14510,2070,6696,11747,19996,5699,3768,15333,15887,17779,13686,13695,7999,2334,521,2644,433,4078,6587,11838,2430,11414,17219,4055,12593,5294,9973,12067,2225,3862,18099,6440,15216,4324,7764,15386,17116,2500,1575,3138,15477,83,19291,14967,11189,13123,15921,15241,6242,6638,15943,18150,14505,14869,4835,1661,5617,19783,15037,18925,10787,15932,19081,15418,1881,15682,7623,18253,11292,16673,11401,2324,1761,11532,3370,4498,3992,13420,12772,5566,5618,11895,398,19707,14439,13464,8237,4814,8492,3374,6315,8005,14403,657,14012,19163,9429,19308,15503,81,5050,17904,4964,17701,2619,3331,16759,15260,17361,4734,368,9476,19879,14100,9495,11454,5778,17804,7613,2899,9198,19807,12190,5607,7307,19951,3689,5294,16782,353,12467,6079,1965,16918,17346,9715,16917,13110,1089,915,12308,4681,18300,6831,10408,2714,17854,7112,12152,18732,1949,9141,1081,17208,13342,12776,16431,1142,3235,3488,10958,7817,3472,17346,875,6389,10705,7335,19902,1945,18369,1325,19312,7339,8898,5037,4513,4620,18749,6978,19017,2227,7040,17544,10281,14459,2690,3250,275,3767,4501,19380,8198,5569,18954,2651,7572,4927,1414,16039,959,2700,6018,4324,10233,5507,15412,3955,2995,2960,7840,4746,8869,3960,16978,17924,16592,17835,3300,370,15812,5558,19741,2977,4422,16400,1208,13484,9453,13405,6300,13999,14481,6177,18613,1775,11111,1488,6860,2763,15509,16738,12994,3414,9733,17607,15375,19853,3810,2175,1195,1348,19713,14119,10898,10842,19075,15567,8793,18354,5305,1600,4567,7887,3703,15246,6305,365,6307,11987,15481,19236,4410,7627,15023,2955,11597,18226,14849,19766,5343,6262,10217,1747,250,19370,9083,18932,15516,2769,9269,12454,19682,2762,19400,13602,9547,4877,17721,3709,12509,12018,15190,11883,12081,7021,18139,4059,4537,5192,13786,19979,325,19308,13407,12293,8528,6044,18859,11934,7213,14541,1991,680,13422,3702,11730,11389,589,3193,7128,1934,3539,3768,1329,8417,18173,4603,1470,15039,6851,4575,11152,19113,4968,15452,17560,6122,19855,13233,12942,8218,19391,4706,13986,5068,8993,15200,13680,15771,2146,3230,11600,17052,6340,18728,6166,8751,2222,14935,7842,15296,3666,12196,18851,17835,2394,17709,6442,18712,15807,8253,15666,4058,14715,19701,19600,571,9224,5742,19210,11666,10513,5354,8248,14056,10440,16846,11020,12867,17366,1472,2864,4848,9276,12657,15394,13705,19023,4222,5105,18232,19773,10620,10076,4390,5013,7082,4953,17270,501,4,11168,6004,19437,8458,18501,9780,520,8492,6441,16556,1450,14643,9923,11700,19991,15617,6082,9669,5501,3921,17749,1816,17171,14484,2228,10761,15388,14982,10709,2494,18755,1935,6854,10612,12837,2320,7242,4044,6610,13759,13535,11432,11346,17451,13001,852,9319,4200,1539,17074,16898,9821,18020,18499,4672,830,6976,17962,13387,5076,565,9773,9138,329,15719,6456,9429,19780,14012,4220,4220,14595,9076,18496,1148,4774,6867,6509,16893,6187,3833,18717,15459,13022,8708,16357,10414,15094,7822,11224,6966,5298,1533,18037,228,798,19060,10472,1609,3015,6823,19397,175,14600,15011,17605,16005,4719,5478,14145,17256,8221,7956,4601,17129,1912,12534,5483,5681,893,3416,8865,14097,5285,9186,12572,1891,12143,1456,7239,3394,17703,12575,5580,2924,16129,5653,6171,14651,15111,19020,9675,10582,7323,6824,11397,10552,18239,16759,11469,15686,12118,10152,14699,18315,19494,10751,14583,18836,15235,10932,14163,3412,2561,2041,10063,5793,5513,7984,1264,16642,4287,16236,12995,16205,2855,18460,16528,2719,6936,12280,16633,18802,281,16684,16100,17368,8507,13121,10272,4910,3613,6971,17415,17980,11204,12773,15804,7068,8949,634,18562,9523,7378,1286,4414,13116,1501,3845,15592,1699,13975,18669,1605,16450,18895,910,14452,6549,14718,8938,9383,13045,15592,14452,3146,6074,12024,92,9808,11192,8681,18237,17671,9563,18106,4939,1719,13865,746,14137,17485,15520,11404,11284,12226,16001,18154,19445,3992,9679,2217,5251,5759,13659,4273,13818,17659,17391,1589,3242,11456,3080,9048,9517,4613,9758,4468,13739,8588,6210,14241,6348,18691,7788,3746,7638,7550,11865,6109,11852,2054,14577,10240,19315,6938,18947,11218,10972,4639,2205,16485,4806,7348,970,12154,9542,15884,7776,7373,17525,10857,14826,5544,4868,9847,3819,17050,18804,812,6491,10383,13880,11540,15452,14112,16124,17192,8776,9055,2079,4546,4379,12483,6990,9544,19093,16810,9848,19505,8383,13061,18876,16894,7159,11067,3521,18711,17250,11504,9119,4161,6764,9361,5631,7993,18467,11114,16326,8741,12869,1426,13887,16704,14285,14106,11913,19875,11833,12311,14614,13239,14955,8806,18920,3906,17027,6203,1410,13161,10119,10315,5079,13915,635,17014,14154,6615,3196,18769,18234,10209,16195,1446,2313,9976,8659,13240,5802,14506,7465,7891,3392,14054,15333,4655,1897,1548,14239,3926,595,2249,7130,10527,16327,5171,11433,5854,10959,6138,4252,5467,17199,19597,10571,15687,1743,4625,19886,4344,18973,18811,17393,4282,8829,3736,5141,245,11269,13969,11633,13972,3731,1515,9186,6006,890,19041,6387,15229,6356,8467,4672,6847,16452,4194,15363,10395,2703,10867,11326,1459,3607,18575,13081,4609,6267,11286,16910,2178,16265,12006,2109,4387,11896,13394,10274,13217,5812,6440,17822,7590,6175,19920,1315,3779,15944,18083,6284,2872,1629,5750,15241,1018,14763,14340,12139,10175,15679,17313,12833,9294,9285,12315,9272,5068,9676,8818,17230,15702,9255,358,13088,19853,11632,10427,19719,2223,11665,13293,15429,16390,19232,7310,16257,6151,10023,10459,7408,5661,14711,2045,17782,14425,3894,11308,19010,19873,1470,17394,15415,12838,3703,16727,10922,4151,13181,1070,15882,3907,1813,6661,3264,16853,15177,18553,6265,5410,8975,1951,6449,12645,17262,6640,10971,2457,19316,17126,12862,450,7175,7218,5965,4582,1507,15467,9424,8974,3519,15250,17107,11965,11486,11906,1592,644,10691,1639,4686,11029,1896,429,2190,2196,14658,16263,17508,19873,14125,2459,17093,7481,15323,15083,2790,14917,17616,16949,17117,3009,7873,3169,6697,628,2789,1041,4733,5766,7211,16014,9476,19222,5926,11978,5587,18084,4531,7042,746,10119,17087,10267,1382,19701,11686,19080,11019,18959,178,10785,11838,1688,9590,17181,15702,9203,1026,12819,1746,12140,12192,9132,19792,15358,12380,1050,161,4963,10209,13421,13157,15761,8902,3744,10239,565,1712,13217,8186,17646,19601,5523,5184,7874,19002,13235,11439,11840,2697,12401,6956,2042,9951,13531,4434,18047,19731,8584,10248,11431,11082,9895,3781,12169,15768,8432,19869,10330,1154,8734,6634,12905,3489,6771,17490,9841,18165,9362,8520,14130,16596,9673,10980,16196,7390,10820,7781,11188,12246,15183,10019,7201,10761,18727,18556,4486,10202,16188,18480,8069,10898,11771,10760,5151,6902,15733,6088,14545,12032,18668,5565,10551,1023,3166,19255,2769,12758,16088,14443,6698,8367,9466,12915,4641,13939,16048,12749,7010,9783,3276,19847,6030,4543,12953,8905,1222,5125,16520,19779,8684,3403,17815,1554,15583,990,2435,16680,3225,17000,6175,8059,8560,3031,7447,12575,12025,19943,11167,159,721,9941,6280,9422,14679,13824,7828,16966,2147,765,15529,3410,19238,5586,18863,19038,15416,7852,14480,5778,15126,5240,16350,15947,7410,901,15019,1500,9513,1907,8206,15068,4719,8709,17291,11956,4566,9182,16780,2171,14115,12388,369,11026,9563,12354,12335,2582,934,1975,6903,3605,7913,2609,2746,13892,9850,7344,19936,546,12002,404,6683,9657,998,5267,12882,14413,13353,10573,9460,19139,11680,1429,6708,3647,4304,18562,15215,8337,18904,12783,8606,3753,16082,12959,4267,3064,11078,7408,19834,3870,13874,4918,11031,15864,16061,7535,12038,12130,18051,4588,9083,9766,18197,9564,7991,16339,19411,8133,18190,11285,15237,2352,17739,10636,5258,17230,6428,10848,3353,3037,6746,2805,10508,10118,2818,11154,74,16165,5534,8226,5674,11989,3282,3325,2671,10764,9212,18003,16012,2950,15318,3762,4627,7072,14271,9265,7007,13930,11681,10959,8637,1486,11510,5662,17907,1549,5900,15710,6330,7875,2823,703,12565,17269,14706,7324,1585,5685,15567,433,4428,10139,17217,376,766,19202,11956,9027,2141,5298,8990,9168,10185,8638,7611,18661,7388,19440,15019,11008,16626,6752,16020,13839,11687,10088,643,13892,17385,4020,11877,13363,9639,11042,11496,16123,3098,17415,10402,12793,4090,12148,8365,18834,1949,4122,5510,945,2772,8199,16021,8727,6332,638,13473,99,14668,12695,12937,830,15537,13997,13721,1096,31,17113,9293,7215,10564,5481,361,6730,13648,10511,6972,9672,8529,12935,5512,14674,16747,1297,4891,9180,1147,16705,16880,18304,1440,9273,11506,9436,4913,13857,3653,1552,8606,7826,13192,6777,16916,5353,2924,14747,14385,2076,18378,15915,3132,7790,17847,12116,12745,16426,7794,14299,4015,3686,6884,3868,2527,18079,15383,11493,8717,11875,15924,7982,10548,17508,14001,12376,16739,14914,1035,3717,6465,13761,2885,6017,4535,13508,19105,10743,6191,14227,10074,108,13829,3869,8786,18284,16669,1914,9543,660,6182,13745,3925,11029,2810,14899,12014,13647,1582,3930,8144,18079,13284,13942,4000,2872,14392,14390,3663,7174,18399,2907,8628,7150,3551,1545,7682,2906,16884,4363,5638,15976,15255,14958,9434,4785,11129,17344,15263,12180,4467,16079,9612,13499,2528,5915,19488,17449,17326,7924,4002,10014,15388,4322,10500,897,3836,942,8372,9890,8425,489,8653,7006,14938,16254,4997,14555,9926,3169,15490,2955,13924,13020,8044,10564,3660,15386,19795,11006,13172,10466,16554,8871,6019,15826,1429,17030,11798,15783,14377,8849,12747,12004,3126,19554,6958,3728,5462,2375,17021,17316,3133,9611,18243,19273,13755,16362,3384,12608,6613,11457,6715,3897,1088,6345,15863,7472,9688,4254,13722,16110,13487,5581,9324,452,1403,10948,17975,13295,18689,12530,12266,1918,8806,7514,5332,14030,9776,15239,15040,1041,162,11243,15005,4195,9915,4807,19542,14843,914,16113,2881,15368,8264,18073,2458,16788,17991,11761,6862,2164,11089,11390,75,1084,12116,3461,16767,17770,17596,4425,937,4513,5858,18567,7300,9382,6651,4749,19540,11345,5180,13522,13675,7767,17502,7452,11341,3294,548,19655,49,1326,15998,3229,11805,14176,11647,17088,9405,8377,12749,5500,4121,13645,1247,10138,8568,13511,13253,14469,7531,4437,9925,3158,2071,4218,16139,277,6350,19553,7755,17476,6903,19060,19064,13741,3442,12550,17496,14600,11190,12839,13678,16949,18231,180,1742,9943,16377,11687,17115,1050,17331,10811,6081,8056,9981,8408,18899,13766,6994,5724,11892,16263,16190,17174,14935,18560,12425,17858,981,14765,2472,1074,699,8314,7836,6762,3801,8005,11062,4630,18797,18232,5468,19550,7459,19011,13026,10460,6080,2499,13083,12407,5845,7308,112,17389,8502,4312,1415,18810,16108,15231,4599,19951,9674,3843,12752,5041,689,14384,6649,15248,8462,3838,166,14168,2979,2063,16619,16106,4384,7588,14139,14303,2303,14793,15449,7007,12358,14597,915,7675,17358,1422,13581,16893,19039,14367,18775,11870,6207,3522,11910,18067,12097,18200,6459,4533,1190,16154,14827,7147,8222,16240,4767,17373,10535,18938,12174,238,15535,5046,9389,16593,1357,8094,5852,847,16630,3959,13383,7237,12248,15100,9997,17301,12106,15049,2465,14427,8506,10898,13607,2287,1611,8883,1263,10549,8513,11497,7320,13856,10018,876,15234,12042,15091,7034,8962,711,45,9511,10710,918,1750,2112,7391,7831,12910,9424,14758,8285,6826,16013,11873,9021,7263,18992,18050,16261,18997,13007,16930,10423,10477,13913,14130,17641,16240,13518,15204,12712,11404,880,11789,11088,7112,6441,8818,15992,8146,7820,5172,3657,8149,13137,1309,13268,4883,2211,15797,16004,16713,4682,9878,18668,16286,8235,18166,820,7465,9063,7996,8186,7078,1046,952,16628,6799,19251,9385,13989,11568,4627,13734,5848,5378,19201,13767,14579,9115,9731,16869,5360,16417,1425,16003,18322,7507,17650,6824,9651,252,5221,1026,14650,9248,3332,11495,19512,9045,3658,18876,19429,1013,18789,5437,15426,15917,11605,1160,4518,4659,14735,11822,4199,6175,3481,7333,7134,11708,17869,10075,2187,10459,12445,6858,16759,7150,17568,10174,17190,19597,6173,19562,14432,4202,9815,818,6380,11958,14972,14615,8123,19888,7837,2868,9530,13207,19597,11575,18794,1337,11104,8275,10977,17210,12284,18169,15349,7950,15683,15677,11896,211,11664,15457,9593,15031,16629,8635,659,2009,432,5116,7134,18770,2440,12678,11088,1723,19259,16257,15509,885,938,5491,10383,6694,1023,3306,18944,3900,11465,4585,8138,14725,9665,15553,10504,14788,18551,88,2802,13788,913,9278,16221,15143,2436,11801,4704,6877,8264,11483,9506,13171,17304,4873,12250,7503,10394,1273,5252,6070,1647,7531,5298,13144,4961,7374,12396,16095,2529,16477,466,11965,14375,16313,2332,19388,1567,3087,12144,19402,2666,7535,15264,15088,11814,12111,2194,9033,15206,12486,9689,2680,12877,897,18044,545,5277,2700,14434,13818,15456,18594,14032,1878,7496,5108,4664,17836,14382,4269,8758,1075,5876,13014,665,3430,2483,11377,6147,1453,16094,6431,7689,17138,4106,5264,4090,14059,4243,4293,2122,17287,9731,15028,4592,5484,14450,234,296,5080,15110,12174,6148,18114,12715,18419,14919,7440,12660,2036,17306,2912,6031,12356,15151,11246,7896,16968,13119,17197,15560,4245,6284,10001,12209,9920,11628,1227,16586,15401,1285,1623,8994,11957,7892,895,16123,8193,7510,13779,11229,4419,6923,16922,6320,4870,17825,4634,8546,1478,11716,19552,7078,17699,1128,6741,18702,3603,8585,13249,10674,6289,7638,17575,13136,1215,17585,6517,19945,14907,1371,11195,8605,8886,17482,11039,3652,5789,7353,18616,12919,18757,1049,9824,18952,10645,19205,11370,10657,19229,6682,16333,16680,4783,14878,5593,11423,8239,5119,17595,1837,2699,10239,9454,14999,1382,5220,8505,12994,15293,17120,3049,4273,3394,18919,1045,7170,14525,3183,18461,9418,4872,734,15304,18106,8554,12903,17426,16955,11195,16611,12724,7569,18477,4734,2589,10363,17264,2328,2779,3681,8783,16262,12215,6114,18346,14284,13024,17828,17898,13673,12516,8649,12513,8255,4311,14599,1802,9006,7526,16736,12147,9611,9585,18248,15794,17613,19101,6938,3609,4973,17205,1534,9399,1646,14186,17413,1412,3594,2466,12339,4799,12058,12536,12168,10166,15457,19214,5495,15075,6872,991,12708,15171,6030,13111,9599,7115,976,6256,15098,9742,17711,19587,7853,18715,2711,12583,12976,12759,10492,502,9825,12326,3249,8549,14286,11361,17625,787,15080,11447,18467,3798,10188,15481,1564,13082,7283,6463,19902,33,17672,15377,3981,4288,69,11659,13092,18623,110,19592,8184,3353,9146,305,5412,5920,18037,1325,10295,6737,12259,6445,12633,16994,19642,15078,12621,3869,11680,921,12766,1996,15492,6564,10428,2903,9382,1960,15676,8090,2537,6271,2967,14519,7874,4408,19024,16065,12596,10430,2728,558,2953,2897,16112,10583,8465,10216,1666,6375,2204,12763,13359,12604,2462,2830,12098,3065,2431,14484,15488,5016,9579,17817,11840,8951,9344,14212,7283,5399,7818,4875,16016,16275,1293,9823,9939,17511,1032,19887,7760,17665,8109,10475,15091,18818,10676,5972,16396,9899,14328,16001,4319,19763,15220,12455,9982,10307,19007,9311,4678,944,8604,10176,4058,15355,521,4989,3425,16247,8726,12697,15157,10309,1322,9467,19656,18610,7359,2095,16937,1454,8347,16665,499,1486,16265,12198,3620,2946,16147,19016,3247,303,1914,9810,78,13892,16598,14859,1564,10512,15220,19433,11975,1035,9975,18699,19040,11095,6762,1731,9984,14037,3300,19192,9769,6403,16861,11094,13224,19243,7809,19306,4851,18866,4448,7742,582,16722,4787,15934,2328,6930,5628,1809,336,16679,10951,19422,17114,14376,13681,11593,88,2820,19959,3145,11561,12653,261,11275,14291,606,5673,17369,139,4996,14757,8213,18450,833,4019,8114,5184,9604,13781,16972,2429,4521,3589,1715,13503,10400,14316,8523,18252,16982,14756,16789,17210,5531,8680,3071,1164,14611,9000,17385,4651,12949,9527,7107,11471,3122,2146,9047,16721,4324,12474,16631,17199,6744,13855,1607,382,10126,7766,18189,8765,956,10710,18576,5097,13416,4091,4415,938,18398,10355,5439,2410,15346,11108,19059,12814,12530,12438,15310,3053,9384,18267,6955,6421,11298,4909,3697,219,3598,17084,6067,5024,14669,7756,4902,10929,6980,18618,3089,14504,17426,4300,4955,6743,4127,3873,11799,19047,12062,6967,15395,5853,9674,410,11120,6918,12300,6356,5428,5105,4956,13943,9223,17509,19054,9293,10067,12141,9598,15450,16015,17327,11354,916,10806,14960,15030,3360,11755,6936,14045,10154,1770,16376,8286,2690,7336,18823,5335,5028,11733,1172,3830,15530,18224,10769,6026,8924,14560,12334,10136,5280,15215,11332,8071,487,19772,8248,9807,9941,17782,566,1626,18207,13727,10979,10491,18330,17290,12712,15485,4277,5263,19880,14317,1587,15425,15389,10526,11264,1571,1743,18969,16122,12289,10955,6763,1442,2226,16080,11380,16874,9280,10895,17016,11816,676,17739,15100,11642,13562,6828,12037,3136,1457,18518,17536,18273,1343,12715,16211,7041,2355,1580,15084,9703,3299,14052,6036,14750,12092,6056,17313,9312,7000,9116,15185,9325,5396,15906,7664,823,17528,13464,13087,5506,18370,16558,15933,12834,7779,10703,6699,13793,9284,2043,10583,18408,12896,11238,9109,9061,4022,11864,4958,17739,7568,1879,13958,17480,3806,2178,12238,6708,4638,8267,5943,13942,13143,16377,14285,916,19570,4585,482,9436,9667,8153,17099,1419,11206,19594,16686,15462,17621,15302,17907,12374,15955,15341,7481,6995,8340,7157,12054,8211,10577,15560,9329,11991,11288,1692,10774,5993,9990,18934,18010,5568,5147,16666,4077,16025,3674,3067,3803,5309,8486,13739,2315,4953,3621,267,8761,13588,1408,8816,1835,3972,10866,6367,7467,8023,13545,10140,5100,16656,15818,14872,18183,5557,9114,12616,17891,11307,2408,16628,311,17312,7411,16575,8995,18220,11846,4762,2449,6681,17889,675,202,1922,12999,10202,16400,12087,13486,11021,10922,14,9540,18273,392,14614,5005,6066,13997,18098,1469,11594,5052,8046,11665,326,9021,1482,4013,9383,2626,11902,11943,11968,16209,9485,13137,11972,11610,15124,9440,8967,16713,17518,10525,13172,6612,11566,14615,16016,18427,13955,17168,12298,12,2879,15135,10128,11238,15672,11658,2987,16937,2021,15833,4,2743,17049,12617,9496,19555,11904,7252,12211,1950,8681,15025,13805,17006,9836,10761,6646,15746,18579,16514,19056,3012,5109,16913,8626,15990,3933,1630,12539,19145,17728,11131,7579,9861,2168,18586,6252,9715,17541,6907,15197,5335,12430,756,5771,18714,5691,1431,14483,724,16856,12486,9445,8563,16510,14405,9521,488,15151,4917,240,19244,16770,1492,14469,2033,17293,18041,14518,12164,15182,15071,16198,836,14088,6115,124,19606,15135,19977,10968,15684,13834,13887,13263,1135,11558,9611,14658,12303,8495,7385,14629,14383,19249,3612,15942,8876,10908,3124,7810,478,1727,18333,8503,13636,13462,17016,11402,7843,13713,6428,6121,2597,660,13635,17399,9301,18661,7933,19731,5687,17233,6073,1262,4595,1202,19883,11713,3634,17067,17252,5285,8786,12014,4047,10012,19925,3374,1635,7014,7834,5291,17964,2401,5644,17535,13654,5940,285,5447,16094,8825,15012,18241,5904,11137,3933,8589,13469,15620,6681,1260,5206,8270,15107,7297,13190,5815,5495,13837,16223,13490,14719,16331,504,19102,4363,16684,7123,8997,878,9169,16274,4197,5670,15,18879,19559,5798,8388,15945,11612,6625,12320,3029,12305,3724,6758,16645,19870,13811,16986,17683,15393,12737,2592,6089,12071,14438,797,8326,3130,4270,16293,3455,19076,9869,3989,2335,4472,1540,14956,14397,18045,8538,5484,6191,15955,15725,17752,3028,1923,8805,4411,8818,13795,4480,3173,9933,6311,3217,18741,10090,4593,6771,5236,15789,513,10622,2368,15701,5825,6416,14717,10969,2907,871,12218,16169,9137,19850,17056,9301,2254,10799,19125,8075,19933,19007,10743,5477,18859,3723,598,14276,16492,11517,218,13653,17492,19305,13065,9605,13999,3817,7460,9435,3820,14612,15053,13886,18066,14110,12143,19318,9622,2373,8698,18468,14025,5388,15602,3896,9532,16000,9831,16136,5436,14387,1471,11804,7422,12661,4499,5095,5009,7763,5962,18465,11426,18497,6230,17326,12937,7866,13096,16811,3458,15671,17182,19508,9414,11213,5862,11726,7426,4773,16770,1308,14000,13523,4179,5501,4613,539,5146,16109,10696,4923,15980,10157,7815,4890,3613,10779,19260,8280,18981,15342,2739,6515,1259,5011,4846,11246,7445,18857,19094,1969,19027,6667,4134,225,6589,6227,14306,19371,5955,13932,1781,17100,19742,10107,1565,14367,16629,14586,10298,7052,7050,14165,12446,5638,9535,8769,14314,11108,17791,4280,6874,1739,15896,12707,1146,9296,16688,958,16540,14096,4981,904,2177,16734,10147,13653,512,264,2016,8507,11606,3744,4231,208,6965,2669,9413,16502,7215,7511,1243,15503,8827,19801,10603,19918,6062,2728,5977,2733,9844,12691,6947,8219,2105,16600,9122,19794,16748,9440,10780,15883,18239,10766,15872,10578,15307,14191,15076,17361,11882,7344,12127,18954,1769,12630,4676,18121,18111,5475,17083,15008,3625,3338,8799,9167,8057,2129,12713,17420,4495,4638,7615,12213,88,19613,4729,19945,17170,11619,8230,16246,5523,14462,17671,19294,610,15305,6426,4038,14850,1227,3805,3419,19518,5570,7273,15503,17914,14023,17562,16250,1821,9175,1868,5360,15131,1002,9191,10346,13511,12195,16165,3501,10381,14663,19342,4574,1804,4047,18788,3480,11520,7005,12187,8605,11582,4238,1114,1641,7398,11789,5138,14291,10080,2899,1253,18449,14861,7117,903,14878,3965,4540,1781,2342,14213,12423,15204,5590,10166,15854,16351,10727,11762,6953,1090,19993,10521,4556,13568,6761,7903,1003,2751,16358,10621,12620,19675,15237,4863,15193,8591,3832,3693,11706,3565,4356,5282,7867,16467,18093,7236,10937,1469,7514,4639,11792,6980,9150,4262,10278,4095,8221,11165,9134,11111,6150,9464,10219,16106,15601,12882,16567,6025,18243,117,6230,8799,8476,5223,11966,19534,7897,16962,14642,15467,18446,5479,3309,17227,3353,14297,18998,16484,13023,12399,1957,19249,2550,11911,14660,12940,948,510,5144,13331,4507,5477,15724,10751,2264,8644,12919,12083,3760,6145,17445,6010,2508,534,15489,7097,8219,405,9295,3363,2195,11841,19050,7963,15803,381,1486,16322,323,7596,12031,3619,16334,18865,14078,13343,12175,7742,6338,19677,14631,255,14191,2885,14897,14359,13141,10658,14561,19185,2716,19924,4525,3786,2042,4036,6077,519,19441,9378,5691,12601,5979,19354,18802,7655,8919,2900,17670,9184,7435,12266,6430,3567,14262,2901,15026,4114,18673,17636,6186,6944,10020,10665,6273,10272,1764,19587,13182,2067,15237,6846,10522,13489,16764,10690,1059,2090,7717,140,19244,611,5232,7321,446,501,12832,3111,16846,6470,6964,18811,19118,538,419,19487,6384,2755,18597,15995,573,10542,6444,11088,5393,17171,3171,7585,6908,167,1778,10562,3360,7754,8275,10320,5768,8410,1216,17285,6102,8393,13638,9500,15070,17019,17452,11357,17269,13376,4728,937,17584,9712,10368,2045,290,6742,7869,71,4375,8234,580,2803,6832,19582,9506,14857,5370,12764,15817,7359,1556,2061,11091,11894,17852,14468,3319,17175,17050,17556,18383,18059,7987,15250,17323,16104,472,6835,12568,11578,913,3403,10225,14233,19571,12440,19475,9690,16380,13699,18082,16416,1526,12456,8134,9621,17714,6846,2693,1102,12902,10192,17504,11365,17787,7139,12091,19384,3796,9012,898,10319,12827,17085,5783,7394,15457,5874,9276,1253,10276,12878,8779,1107,5530,2283,14238,719,2239,8622,1235,6193,18225,797,11657,5414,3924,10551,2679,6506,636,3251,12154,15638,12585,1806,5785,5123,4037,18078,11805,11512,17953,16753,16626,3956,11127,12134,7312,9834,6864,16932,3551,16508,4483,13878,7102,14843,7600,18546,10144,8706,11694,7575,1500,1951,5577,16723,3522,1901,19110,2161,1695,6656,13681,17115,2850,8524,12894,12093,10767,5241,16915,2277,8148,2561,2422,15800,5755,15451,11128,13879,11188,9558,11523,3480,8212,12214,11544,18016,10789,7906,13920,6345,8493,5687,16800,9586,11955,2994,6098,12048,9830,495,6980,14907,11846,18052,16909,6707,12201,3321,3595,10371,9275,8194,8139,624,4571,2904,11219,15658,11846,6138,10004,17450,5278,5351,10097,2274,18589,13605,8578,6454,2107,13677,18644,4123,5803,14051,18006,3400,5918,17873,13515,1578,12313,9106,10322,1499,4043,1755,18784,16821,18548,7508,11167,12009,11347,15095,352,9012,12896,3830,16471,192,18915,12206,14787,8129,19769,18293,11890,17111,15985,10591,17096,16447,13337,1032,379,15368,8035,8224,2370,10010,1854,11691,11843,19268,6338,1563,16420,305,5629,16662,15831,3092,18893,4967,17268,10555,19779,5679,11096,16364,966,4564,17731,16212,12825,3381,5410,18326,16042,4512,1237,12140,11634,17162,5249,13796,8755,14071,6312,16441,10950,8099,11514,19272,957,10890,15876,5656,19118,11425,7564,17467,1273,5519,17639,1097,12373,16035,15251,8424,16288,1537,5639,8494,19595,3045,8465,3890,1365,14852,1921,917,2984,13890,4151,9834,19425,12935,19318,132,10258,14383,19755,17654,8235,15006,16663,10808,10648,6279,58,19650,11656,8874,16598,8163,17912,1035,2894,4559,12118,18090,14525,6343,15565,919,13816,5028,17706,12202,11263,1054,2516,13924,3950,15261,266,11130,4717,12969,4617,3777,5158,10562,16779,8772,6905,18836,17812,6109,12873,2808,9252,3089,14071,1784,11031,18690,16541,19390,16743,522,5595,2486,4291,5398,11522,4649,7336,1593,18887,12033,11894,8079,3051,17159,3401,8151,5953,2329,5586,14344,7124,4479,3749,7522,242,11457,2249,1929,8759,9689,3931,7408,10903,5266,19959,17281,5159,10950,14461,6130,10282,4178,4347,14874,14407,10614,10180,6322,13756,6702,14355,12162,4615,4623,14433,10040,10109,9609,3020,834,17423,8196,10282,7499,7947,14457,8811,12453,13180,1476,19963,14606,17472,7077,11411,16934,13956,16103,4102,10326,15865,10373,218,19519,13931,15139,1374,5174,5224,4702,9405,7010,7092,566,107,222,8485,8032,2782,13788,14350,14739,11683,3810,18187,253,9229,6236,4678,9316,6957,4550,9683,7518,18506,4364,14726,15482,17174,5856,7930,12444,3660,9044,15675,2626,9216,15916,15250,13756,13271,10105,2913,14400,9796,14210,792,18809,8798,1409,9403,12231,2495,16755,6913,7829,9579,10784,9522,1135,5043,12237,2970,12190,4853,17194,6865,7576,15257,12748,13282,17629,17405,8234,2176,9979,11360,4318,1118,18941,15002,2068,16713,3273,12086,5568,9975,11679,8842,18687,7042,15902,11476,18999,12678,9093,15739,3912,8497,12874,11330,3305,18355,5274,1416,13768,14247,15249,8015,14548,18279,1612,3658,19950,7795,13569,7865,4106,11170,4431,11643,11738,15472,19223,18889,7545,9304,13162,2611,13352,1146,8256,2835,16722,19135,1283,8075,3529,14816,4217,16652,163,8583,14719,4327,359,19477,8620,16477,11727,11949,13891,1036,1102,2243,1437,19381,7254,19920,14395,7981,6670,1723,15274,11957,14352,5679,18624,13556,19549,15347,10678,10391,12854,10509,8973,16418,2287,17928,8636,9893,92,15950,15939,6930,1168,11750,352,17475,2160,12975,9221,4371,10175,16552,16943,2888,712,3487,1658,14460,14956,6757,3557,16134,9948,10746,5670,6370,14525,18979,291,16582,2697,9991,7689,5681,18699,7696,18100,2489,14445,17039,8670,1936,8626,6557,7959,9424,1743,18115,7052,11804,18696,1805,10544,14981,15154,3168,11731,12546,8509,18124,4706,9885,571,11855,4310,14155,18876,8360,9628,16612,19323,17384,6093,3391,19042,1953,17168,13505,13787,6116,761,11528,4024,14610,3337,14148,5036,8043,6408,6715,6594,14497,8797,19349,3406,4129,8495,3404,464,1226,13892,12916,4394,11911,13901,11763,2619,17500,8430,2680,18136,16841,3012,2405,13255,13515,3910,4088,12885,13743,2165,9545,2102,18290,6844,7541,14717,8058,1496,2385,7994,15455,1378,16753,3134,12626,7635,12626,8382,15073,9254,10673,3455,15200,13621,12456,13056,19645,15299,7228,8168,171,7273,6937,19757,4890,17068,4209,18044,14990,15653,19562,14709,15371,2334,17735,12529,4348,3888,17227,10474,8821,15124,18576,10634,17228,18236,9798,15089,5777,19886,10435,2492,19713,17063,3681,18781,303,2083,7919,9182,292,19307,15729,5791,4766,19589,5295,10491,3091,12656,17362,12301,15392,9679,11201,17477,12330,5647,6917,13269,11841,12656,16249,9359,10614,9759,16158,18370,3445,3694,16100,6482,18148,16020,11458,12936,13677,19026,17644,7385,579,14986,9212,299,4718,12752,9899,1974,2266,11679,18623,8547,19813,17081,2136,11057,5175,11907,11551,2870,10436,8775,3961,8110,10459,12470,12834,6690,11525,13426,2403,11355,15798,12640,17898,18940,14304,10427,3265,12401,2232,11984,1804,19085,9813,11600,11664,7337,13624,14550,6272,2591,19071,6924,17651,19658,6409,19535,17928,9078,7114,7673,17929,11792,1271,9713,15872,5784,14620,13520,17145,808,18257,14287,1582,8633,4273,2621,12607,17002,9909,14643,5535,10918,1810,14331,13386,19514,7415,8743,15756,4732,10721,8523,4433,9162,19937,5768,2897,12971,7806,6884,19497,16911,5489,2299,5685,3644,11569,12144,5030,17705,19726,15978,7104,6296,11422,2013,7946,18171,5379,5639,16189,1440,5626,9374,12189,17611,12532,5248,12462,7980,5555,5325,8551,2009,4198,7571,9722,19200,16154,5402,12334,5119,3403,14146,8825,7465,12140,6092,10801,10022,12599,11006,19157,7430,17079,4288,11784,929,18275,8745,4319,1563,16410,2146,18274,11561,15075,15732,15683,9610,18041,2901,4298,5396,18898,13144,16175,8728,18455,7037,8841,3572,17272,16851,17383,10511,9379,1001,16581,14433,2873,13700,3728,14506,17496,16442,2727,60,19544,3739,5086,11841,11287,773,8619,15120,2020,2996,17490,17356,18138,19368,5355,11937,12611,10341,8201,11380,4657,3878,4694,4133,14232,8690,12811,4435,18965,2187,3327,15325,5129,5476,4999,1905,5428,16614,3547,3157,1776,7104,13754,9983,13408,18262,11590,7666,5262,6003,11466,16801,6049,14051,4856,18346,2219,7958,8391,18014,19969,7917,18739,1955,18395,14820,15719,7645,15931,7413,6662,1288,18779,4168,13587,18343,17355,549,1244,4261,7574,1324,19150,5589,7332,7791,18027,19771,9102,10805,15043,434,3558,2159,13944,18931,19342,6899,18587,19198,15094,17888,3663,778,15098,6906,10647,9797,17167,2172,17036,18073,4703,2569,16218,1417,19546,13750,1346,6621,12651,16108,16964,347,4866,17825,1019,4722,7178,7492,7745,8179,18495,14280,19211,6350,6481,15833,1254,14890,325,11682,19447,12030,623,14569,1871,2080,7766,1992,10161,4832,12786,18662,5297,12652,7720,582,10937,16571,19303,8160,7658,8854,3260,13070,5609,5284,16086,18284,17283,5144,3470,18293,14016,8334,19012,2963,12276,15985,12243,3234,5675,5975,8795,10409,13449,11771,5896,19825,7578,18316,702,17307,1137,195,5709,13728,8328,3208,5892,1426,2193,965,3727,10945,13161,3421,3850,5658,2355,5424,4445,9628,10573,2841,14761,2287,13857,5497,1597,3229,10809,10928,16615,9675,1938,6043,8066,7258,15664,19377,18986,4743,12395,18870,12442,1050,11956,16859,6264,1339,6161,15411,3692,7101,15700,15766,12086,5292,3431,17996,17408,4271,6698,11569,19553,3797,15028,16424,3091,17553,12504,134,4745,14135,8494,15005,13035,15786,4666,761,2902,11925,14125,4113,378,9199,17057,18593,5708,5563,1772,18232,13926,14921,18669,12520,11622,3481,3066,2651,13383,13951,19654,7655,18571,16123,12883,16794,8090,6972,9714,13208,9535,1629,3886,13464,16726,3741,2249,18169,6887,131,12189,12472,14070,18085,19925,18966,2286,14712,8795,3664,1386,13026,9873,5917,17618,12902,18198,11842,10012,11936,10137,11270,13298,8272,14440,6765,12874,9566,9022,17575,1411,4671,19839,15552,396,17885,17712,9655,14783,19151,3175,9208,9418,17792,6610,5953,10627,9658,15119,17498,12721,3195,18021,16538,5949,6838,188,17239,4981,9523,6749,19806,15317,1144,7425,13523,6457,18491,1819,15585,19677,5461,14817,17128,1386,644,1215,8713,13148,16921,3272,4844,9851,10346,15185,16689,6345,5877,11790,18266,16993,16735,14932,11323,5431,1889,12616,9273,13080,11641,1476,11994,2995,3379,11244,4255,3356,17706,2307,4569,4032,18677,6279,14096,1228,14565,15110,9433,11547,5823,277,3614,16647,10688,6102,16871,5160,19786,12716,18140,6300,8533,8505,1952,287,10475,18435,19470,19651,15755,13887,19593,4146,1689,3368,9343,2451,19908,5886,2700,13595,10368,8393,14796,8032,4025,8761,7237,3038,16034,19392,18076,11145,16740,6632,13017,11888,15671,1940,12627,3161,3318,7683,18908,19513,11006,13245,2413,4936,10808,3177,10769,13669,7096,18491,7093,10828,7495,13524,10365,11495,15906,18949,14107,7235,4604,19789,925,19893,5472,8554,15464,568,16459,16357,16575,19435,5065,6850,5292,2009,19049,11964,13709,916,14840,14637,2829,776,2665,9297,16477,17060,15457,10756,7211,19469,1742,9658,11533,8233,6366,1665,850,9239,17309,6303,4918,9176,13761,16968,1099,3486,15772,6344,10233,16846,3304,1717,10336,2935,13920,6056,6776,339,10878,14699,5733,11994,11446,1233,6892,8240,821,2570,5538,17926,11854,15793,6943,18563,12680,17920,398,6246,12053,7863,8093,18838,13594,18284,4153,232,10553,17616,18448,18483,7893,12027,5078,563,18729,3431,18012,4583,3660,18257,19760,3985,9922,11146,5801,9428,2,8937,19534,18107,3075,185,292,8243,13676,8912,3863,3289,9286,13766,15923,10915,18411,12524,18805,99,94,8573,15676,17556,10893,2357,19404,10239,15953,7805,14457,1845,13526,10446,10608,14089,18248,9087,10207,5883,10971,2051,4843,11453,8462,8793,10585,4148,1375,15483,10066,10392,7915,9240,1893,16470,14026,12099,5287,14950,5705,17841,505,15081,11289,12768,5291,4161,16873,4255,6453,19437,14122,6907,16,1854,7616,6396,18489,9245,1630,17317,9338,14057,3154,4190,4900,16033,17812,5767,7918,11926,9563,11744,18857,6527,7453,17699,3482,7699,7353,1506,10432,4056,16035,11232,10297,5852,8080,15980,10977,8847,16447,4033,60,1103,16140,14239,17359,2418,10535,11210,6431,10666,12481,3632,11202,5925,7703,9366,18318,1623,15050,13100,1980,18992,5190,12693,11855,11561,2378,7375,15792,11138,14942,17016,16544,406,19045,3743,3861,1344,4870,8643,9337,16335,4871,4775,1046,12999,5817,14041,18799,11372,10165,550,14053,2967,8386,6436,1278,11043,4000,17921,497,3696,8044,5429,8202,7635,2059,10575,2718,17083,10507,6673,6082,10950,17106,17098,14960,3980,4272,13572,9775,1802,14815,5682,2402,10650,8415,13867,3604,11878,1902,14525,12209,9913,15204,3476,6334,4753,10116,10947,17737,5472,9313,3365,15258,7798,3065,2953,9887,10381,2362,15032,9503,5310,18966,14847,12805,7400,2364,9925,3658,11601,4353,5866,3855,6749,3796,19881,4967,18439,5110,13549,16495,12466,8688,19405,18822,11117,7090,1074,18386,14812,8776,10907,17929,17886,12635,5101,4870,11900,9084,3212,394,17498,1443,3359,14910,9480,10371,12465,9892,14690,12588,17377,16705,4220,16345,6571,15267,15143,15642,7994,12077,3846,4624,9930,1651,1710,2444,16662,973,3949,6516,7128,16313,17013,1663,3941,10742,6374,3476,11530,6711,3589,3711,14408,15593,3496,16016,8693,2399,3071,8185,2156,5968,13657,13259,10428,11373,16820,15055,18409,10987,12493,15253,15959,1071,18014,17667,12698,11102,14535,14004,9282,17300,18533,16318,5277,14217,13140,4750,12771,516,10443,14399,7385,2413,12676,2071,978,16504,4107,15381,478,5406,5505,5289,10370,620,9180,13616,18207,9040,12788,1746,16337,4840,9871,3340,139,17296,15422,13858,18678,4113,8716,19612,10526,8265,7477,898,2540,740,1069,9166,16870,16363,9160,952,11475,14718,19156,19971,19057,2838,19503,1387,11882,11534,15870,16984,1526,17879,11390,14875,16326,772,13798,11815,14132,14446,11239,513,4563,18908,710,13428,617,10664,15874,2984,19378,2648,9561,1823,17002,10955,930,2957,14919,10822,10550,16409,11778,11868,11803,5549,9827,18630,5979,6749,14559,2636,15937,17347,6368,1875,3450,13589,10436,2900,18882,13299,9643,16668,6175,15509,4877,9958,7062,9527,14077,3308,2008,12430,4129,7246,4190,15416,6592,8899,6519,14648,887,12227,13683,3677,7897,11573,1267,19357,14986,14464,9817,12439,2238,3811,428,8546,6886,12239,11608,6784,1282,19449,18510,2371,4064,11171,7867,19502,2791,2659,4245,723,17768,1257,2135,2301,19650,4622,17371,18082,8451,8450,1431,13198,19459,778,4909,13020,11868,14687,17029,4105,5120,137,4858,16365,8877,10095,6385,15924,12787,12687,432,5040,13435,1870,3685,10120,8509,2559,732,11024,2693,12869,17938,9964,2478,13493,66,2445,13864,16604,855,17855,19599,12107,12698,11478,901,17264,6568,7399,16669,877,14698,2732,637,529,15516,16662,5469,18140,9887,18912,19440,11006,5125,19716,3518,13938,9865,18187,7283,7047,14688,15542,18935,1724,9209,19341,10756,16337,13138,14663,7099,16884,16223,7436,11416,15791,2687,7536,14868,6920,5367,8253,4612,674,3920,1196,5462,19772,11074,5596,11542,5143,6378,17656,1083,6321,5111,4686,11198,15762,3824,12771,13823,6765,1140,4919,17405,10745,9461,4458,19901,14278,2436,6934,19162,4828,2915,80,13074,5114,11683,2678,10194,4770,6062,3650,7273,16489,12321,18627,3342,13803,6110,14637,1877,10658,14098,14229,17599,10383,3098,10907,6028,18164,19491,3458,8769,4778,10100,9854,12926,4030,12496,8751,8218,17230,17747,3230,13307,8580,18195,10135,10927,7584,6879,1036,8820,1217,10666,6744,4991,3851,119,17488,18166,17255,18020,6489,2966,8923,19985,19242,5501,11354,9663,1579,13672,1326,16727,16460,2798,5729,5696,5237,6512,14527,1952,5471,7971,14780,7536,7082,472,19341,2960,8577,13380,18918,15692,17735,1454,10245,3528,13122,8925,18072,776,3430,4803,15375,13925,4464,19176,17657,3476,6855,9176,3133,7769,15730,12605,12452,10284,15651,19007,19617,7920,9075,7659,14809,7578,14241,26,7524,6519,14114,2590,8798,4162,6386,1645,18173,11629,19085,11203,2594,207,2125,6531,1817,573,6580,4302,11910,12559,18562,7827,12986,4046,6472,12519,14949,12471,15852,9678,6938,7900,9609,3188,5378,14280,19932,912,17804,9331,13815,7577,4281,647,7276,17901,11335,5812,8238,16250,1461,18037,10066,15129,19450,6957,10140,8022,5224,12423,15737,14798,15802,5644,4634,17560,7948,452,19903,2929,13061,2222,2463,10859,17197,4570,2013,1579,6332,3515,9326,3489,2136,15692,1518,13613,15995,370,17943,17826,4102,16947,15845,12748,12868,16706,15456,3968,8680,11821,13693,13050,12665,18587,18759,1252,5675,8768,8794,3836,8483,4909,5499,6333,17807,11557,8394,15761,16035,835,9968,19689,17023,1863,11899,2622,18615,7464,5054,8923,13749,19043,3773,11038,19778,17780,18730,19326,18268,6103,644,1821,17905,7435,1860,1879,17966,3158,4419,19073,7495,8447,16128,3900,15156,8052,6400,712,360,1456,8466,16876,14676,2751,16944,6335,16201,15053,4563,11785,7840,11026,16166,11914,13598,1350,13315,6219,11627,11166,2715,10104,15003,2758,8604,1913,8607,17761,2779,10564,14908,17364,8101,376,18770,16740,4728,2949,8182,14994,10461,2470,16468,16687,13776,13337,11691,6734,19973,2815,18631,14217,16839,17942,17027,2275,14414,9244,14202,16266,13727,5822,756,17508,10917,17346,8911,10776,6831,15643,9981,1465,465,2051,1699,3614,15763,13344,13693,11321,18005,780,19599,16094,4623,2124,12651,12876,17341,2527,17487,13916,3277,6897,12637,1616,4619,12427,1254,4939,7408,14173,3811,2520,18710,696,2330,4782,7482,8727,16445,11237,8394,18979,18892,16694,10383,9962,7199,19223,16365,2912,8334,8620,8340,13608,9229,6354,17857,14431,2460,16626,5679,4479,3751,3044,982,14961,15826,13989,14076,5058,10845,15344,15151,9270,5157,9313,9696,5008,10276,3874,5215,14332,15714,19803,8313,13123,7058,11324,19645,13822,3616,19075,7657,18985,12436,3164,8526,7364,909,13899,3246,8058,2552,16100,10164,19536,9980,5774,4163,4636,10226,7207,16449,16919,5881,10984,7282,3409,16663,4851,11225,19073,10246,17556,11780,17776,16825,9008,14463,6893,9088,2141,13346,1317,15190,6729,14333,2748,18802,10627,1205,7254,17605,2530,9999,11047,16897,2240,19934,17270,2772,3021,9828,4607,2524,13678,8619,18584,288,19145,16014,5476,9279,9487,15581,15690,16078,5307,2008,10503,8160,1069,11039,14945,18149,8678,13251,1858,3195,2325,7148,10351,9817,8838,13586,8243,6850,8284,18397,13993,7350,13008,13033,4904,3477,7565,13065,8032,2494,4978,8874,8106,769,19986,16487,7039,6690,2159,6445,8857,3139,4248,19110,11663,15227,6842,192,12181,18,16400,14302,10083,17580,1832,4428,6230,9098,5005,1550,10724,11321,1493,18245,15337,18621,8302,5432,2748,13072,1360,186,1359,632,5331,16354,9192,11399,17990,9261,7513,17497,12208,11128,12818,4131,6016,18056,8017,18321,14697,13418,15436,7799,8797,19741,8470,6466,529,7165,6550,15801,4857,9654,3276,16574,7872,6974,8770,18632,11995,17329,861,3651,2701,17829,13142,4159,9927,7399,8694,15373,8958,13103,12751,19930,14555,13542,19821,18310,8598,17506,9810,15148,4297,1858,15718,8996,19691,14264,11342,9270,18461,13682,3746,5991,5061,1269,7807,13348,9970,763,9397,13421,6659,14382,18454,11621,17174,4410,11837,290,16345,16191,1693,11165,9567,5611,9173,7439,14006,16571,12047,11343,5255,5432,4013,5699,2062,18202,10147,19329,3676,15280,9551,13181,15941,18248,13136,5975,9761,16701,16649,11954,8493,7142,3688,17468,16439,11183,7515,5426,15670,19939,14881,19938,7084,3338,14041,11142,9238,9903,13667,10096,17434,5397,16463,4760,16949,13684,1589,4417,1552,9128,12226,2007,9017,14852,11855,534,16989,8645,7420,11702,9319,7438,15377,2821,17352,15363,3932,567,13131,9251,4741,17331,859,5394,18817,1163,19660,8936,7322,9385,819,11298,11335,11541,16002,8024,6551,7405,15006,19102,18096,7687,12044,11685,14854,4964,4213,8068,3365,18407,5929,11502,5888,13262,9672,12052,8772,2906,4438,12908,12121,12039,580,10848,7065,17276,6654,11579,17482,4710,5692,4501,9508,605,17841,18118,16733,4890,12794,13382,1450,4801,8117,6727,225,9935,5391,8046,8710,9526,12046,12561,8701,13872,5541,1249,15459,17131,13619,513,5725,6493,15834,6204,2154,6292,9969,5247,14708,12436,15478,3511,19565,16666,14793,2425,6859,3548,7029,16056,13517,3411,15011,12573,11928,14717,14207,11517,10774,13108,9751,7901,5687,422,7332,15193,8906,9847,15680,19437,9167,1445,15893,8070,4741,17549,13984,10097,6163,5377,15929,13096,8978,19670,11029,16258,9256,14692,6865,6050,19008,4504,13289,11122,6863,659,14406,13729,11998,12700,13876,16694,814,6603,14499,16932,33,13987,5804,4633,3460,3446,10427,13912,7268,10984,7323,5509,438,19148,18732,15400,13575,18882,7035,1371,12845,7433,6474,9920,11960,1093,13378,14571,8185,10404,6755,12809,11851,11273,19382,11597,17119,18207,16731,10079,18250,19513,19725,638,16977,7553,18381,390,6548,2684,4495,15402,10700,382,10691,18933,3863,10553,12085,8175,15835,12853,16501,5036,2285,5366,11295,17259,9681,10117,18969,13181,12981,3390,4374,940,8571,17828,6174,19460,10002,17349,1748,6011,13457,6514,2611,14374,11964,5671,10861,18492,15560,2771,9099,19026,12243,1643,18239,19219,53,8416,9378,19503,4923,11312,15354,15264,8823,11569,187,13243,14627,7776,4785,7794,13525,9258,9670,17540,10667,9573,19564,16778,4718,8902,19404,244,3970,12042,16421,4538,4272,13441,4466,14466,94,10338,4811,2916,13886,1203,15611,3480,18576,12839,4265,11875,8293,12034,12742,6560,3340,12476,344,152,4379,5577,916,732,11338,2199,1266,19443,289,7109,9438,10450,6412,2973,14786,10471,17356,12832,4714,8097,11902,13457,6248,18081,12342,19339,2851,3941,1533,8940,16970,11877,18459,9115,5986,6034,7531,4496,6635,19778,4236,6547,3763,10833,12231,14390,5538,8387,17422,9253,10644,13337,1870,3268,3685,5379,2508,544,9784,10399,4521,3823,17029,10847,11448,3314,1691,10687,11357,9430,5054,4982,1738,14279,9331,1668,6356,18675,10213,18704,12055,7840,8382,2018,12888,18201,3813,19271,7063,18465,7408,1442,8737,4823,7299,10261,11439,12152,12571,13230,9547,4683,2947,16863,5570,3668,9281,14199,5020,348,4405,4440,13124,4056,18510,11153,5382,1725,19105,4105,12894,12347,15165,19628,18479,15816,684,14303,9611,8508,4068,19935,5524,18107,8470,13760,11582,15537,16285,5614,18914,11681,10966,4660,5010,18532,14629,17093,19721,844,8079,2349,472,8206,14476,9236,345,11384,16062,9622,7130,4459,439,12802,14600,13005,19762,4540,947,19236,5209,17461,10141,17514,2976,13397,17130,7344,4003,16817,4617,15940,9000,19855,17219,13876,15899,4741,6030,7372,12169,569,19685,17441,5361,7488,11313,3965,13996,8570,10331,13604,692,7040,10973,3281,15297,18077,18133,12257,1850,2680,6007,16226,9438,10393,13979,13668,8654,3143,4577,13302,4724,13348,8593,3514,14742,10406,15866,2167,15651,15061,8770,9705,4299,2086,15246,3522,19105,16877,19537,930,6838,5276,8462,11548,9387,19337,16793,6862,19008,5824,19117,12899,520,19609,16284,5677,15813,8480,17904,15214,12816,12444,8865,10113,12403,8872,3849,17217,9385,1882,15790,18250,18044,18931,10653,18450,3166,8478,13133,15612,12394,446,10935,15867,5751,6314,4419,16271,16345,12873,4090,1846,7371,7584,7855,2401,9402,13102,13261,4039,13566,11646,2982,15320,18208,18880,525,11711,390,10443,10635,13057,6859,1981,16573,7925,17564,16514,16915,4737,378,8760,19993,12806,18188,4684,10973,15646,10972,16,7442,3901,11917,19484,10276,9381,15696,18087,7377,6610,8489,4911,6903,7790,10857,12385,12440,12353,7663,13566,9311,19228,10241,18195,9712,13772,2395,8798,6156,7250,16440,7982,17290,2730,7951,11036,8498,11996,6369,3637,16107,13104,15147,19111,16227,18110,10840,9334,2552,8146,19734,4601,14502,13396,5233,15028,13132,4735,7483,7526,17917,1992,1809,14695,16127,12026,6058,14819,4395,2851,18114,12911,15568,5071,12001,6769,966,7209,8815,5092,4095,1894,18565,7998,3716,6219,10120,11477,19120,3223,2654,2422,3549,15619,19514,1151,14191,15590,726,11522,16431,19755,16331,1687,18739,765,5237,1267,4721,12840,17133,12238,10260,12538,7451,15919,13833,13427,9453,5311,15979,1739,18234,18047,16440,19819,13819,6817,10135,602,10809,1867,14880,9219,6269,5916,2164,17778,14456,17718,1030,10038,18692,2870,6327,1942,18884,15156,1644,9069,14820,3863,3643,17536,506,19966,3137,18701,16428,1444,869,14318,18915,19314,14952,14597,2940,9687,18801,7611,7996,4383,9271,1502,3286,614,10032,11351,16412,12562,15133,5126,10946,7548,9574,12273,4473,6242,18065,14165,780,14436,6809,8447,4281,7243,1052,16925,19610,5190,8945,7061,2973,11691,9093,3051,11415,13714,11442,5244,17050,18971,16746,2205,11472,12472,13575,3448,12794,5461,8731,11508,185,12343,6484,10797,5277,968,584,10424,16062,8152,13210,5619,9437,2232,2159,1093,15747,854,15959,16535,19993,5085,16538,725,4414,13008,13271,16191,4402,5798,15328,11702,18213,2789,1291,15547,15288,4576,11089,2124,4496,4075,5300,2779,11428,11789,9214,16577,10660,15265,15879,6908,17951,13657,11047,6360,10021,11422,2286,7119,8345,5602,15493,13143,17132,19125,17012,10315,10957,10986,2004,12918,1601,3230,14377,3430,3568,14716,14766,2705,365,6771,2369,8162,4074,11828,4788,7887,15334,5379,2455,10161,4591,16297,1374,11149,12625,3004,17840,666,9126,3467,7734,8282,12803,1475,16395,16989,7534,10017,4375,17299,14090,17181,7078,9613,2659,2557,10356,11693,11849,12489,4631,716,13092,10749,5981,701,10780,4014,13821,17054,3604,6871,10259,13898,4501,18485,983,4364,1879,9470,5107,3258,8563,13577,16239,7858,12618,10745,291,16475,328,3452,6389,10389,11574,12311,10431,19643,11086,19351,4670,8908,1735,15266,13242,16557,17401,16706,8194,1168,12009,18632,5126,14290,7143,1468,14673,10600,18467,19127,18722,13707,1517,10298,7881,7633,8919,12687,8279,17944,5983,2234,6612,15944,19997,5127,8946,6640,8713,18620,18040,10265,6823,5725,7023,5422,7047,9965,17846,4806,2264,4963,70,2613,2374,11241,12796,18367,14227,15340,19105,330,13489,2194,757,16705,4053,293,11947,12100,11189,7496,7297,11888,14376,18239,18431,6650,16366,1606,13643,2332,19451,11832,10917,4301,6889,15164,19757,15873,10131,4239,7635,2499,9475,6667,2324,15740,9925,10300,10638,7883,1556,10496,17729,2137,19614,2247,14118,2334,8871,771,12829,14055,4650,6680,3645,11400,5732,4651,1729,9908,3964,11683,15686,4723,18890,11511,18799,6622,15487,16490,13394,13625,10702,9362,8962,890,17641,3762,2648,8287,8000,6583,11123,9670,14957,406,5654,6490,15633,10483,8104,18008,1282,18733,2362,17487,5754,5060,10507,13653,11623,544,12898,11002,1840,16249,5853,751,17268,1083,7600,14947,12291,10896,19245,4998,18391,15081,14971,10251,10217,8067,6823,11552,5037,15914,3243,4651,1359,3188,14441,16477,2423,5594,4926,8799,5562,11727,4320,6152,6873,1057,12338,5551,11424,12774,15230,17880,4649,17556,2930,4729,12391,7180,2582,4387,6738,13152,9308,1770,15552,7852,16583,2531,5160,14257,17104,7210,19189,678,260,18469,6333,2210,13841,235,3164,15997,4229,13847,11097,12199,12238,10682,16437,5010,7056,19751,16693,6856,3232,9412,17748,7648,15461,13254,16187,9602,13027,5151,15819,2992,8493,19770,5623,5239,15830,11543,14548,16475,14513,17721,19493,19856,4486,5366,4114,8424,8268,13430,2947,440,8895,4924,10482,12955,11011,9763,9297,17426,24,15621,15077,16536,6010,14549,1976,12846,2316,11280,14679,11256,13178,7452,2528,266,11435,3682,9469,11760,16054,19245,13569,18799,2357,14874,9587,4764,18918,8483,19656,8334,1884,4418,2171,2353,5514,14876,15972,11364,16704,13956,15647,3594,15662,18670,4034,9594,7673,2415,19158,18600,12893,589,3798,16877,3709,9612,11851,18186,16738,6517,12586,2729,16656,323,3393,5416,18604,18158,3330,18350,10082,1533,18482,12106,10946,3553,15729,5009,1322,15395,15628,17603,14897,16687,16706,1010,19325,6668,15742,9067,17534,1378,12340,8666,1271,18906,8862,8609,7180,3619,5416,354,17955,9591,6131,16723,17528,19120,16639,818,282,15150,2091,2024,9329,4993,8664,6138,9468,16527,681,16805,19207,16721,11119,19432,19589,7122,9015,13641,7771,2355,16777,2091,6725,310,6112,14761,9285,11340,12983,6669,11434,4332,6853,3291,4333,15019,13886,16,6891,11304,320,17610,16882,13998,17325,12514,12525,16172,6812,7469,10464,197,9322,13561,1364,1372,251,10643,18160,11646,4721,4542,4088,6541,18348,19742,16390,8442,16464,15267,12230,3210,1851,6247,15088,7861,9242,19339,6144,15366,7502,12882,9263,4563,19269,6586,9828,9190,7801,18659,13045,18289,13108,477,18085,11187,15295,9692,13274,10780,8804,18853,3185,1766,6584,17691,18636,14207,9393,18881,11251,12260,19266,18212,13647,3028,8719,6164,4244,19380,11608,842,4227,18567,16512,4699,12088,9956,11935,14125,6809,5860,18511,14526,3681,5241,18302,8304,8800,7753,14549,14562,4916,9557,4982,11604,7123,18701,7533,19419,6205,16361,8950,18006,19664,6092,18706,1451,7616,16345,11996,11225,17976,2989,19990,1621,18604,12619,14070,2981,14742,7326,3851,1540,10240,6394,12670,17194,13609,7344,921,3114,16204,3211,406,9523,5390,4111,13581,15610,10410,15706,8660,11574,11560,11611,1747,16500,4084,1050,14390,8654,1931,12969,11339,2168,18453,15691,18804,19754,15095,6253,2109,7926,4868,10614,18836,3307,18107,5031,12598,18583,13500,39,16349,10878,16838,7909,18534,7915,12234,14293,2136,16188,19854,18682,5460,4307,2759,17164,7331,15203,2990,18520,19189,8651,3427,3836,7455,4515,468,16329,13461,326,325,17711,12553,3642,5442,4966,12371,6832,5449,914,1999,2349,6263,2407,17143,11060,19653,13414,5043,2862,12121,14,3782,19296,12149,19522,1586,16328,9318,1519,15053,4645,12188,3313,10312,10133,17444,13491,3951,15164,96,5273,14549,1389,18299,2145,10561,13710,15323,19911,16339,13329,6692,492,16009,11432,7762,9787,6665,1795,7067,1045,7990,6030,14004,6281,3633,5732,12923,9526,2104,5608,1962,4128,12733,19499,7185,11776,12348,207,7035,10394,4505,2979,18240,1188,12148,3441,448,745,17139,14775,7257,15614,7879,15742,109,195,2580,15637,10696,6012,3025,18206,15245,17478,7434,3561,18678,19459,8702,6467,1010,18456,273,10040,8539,4796,15035,14680,11052,3643,4720,10989,19854,11050,9100,535,9938,11775,12337,3695,17627,7189,4702,9165,19376,6477,757,16402,3429,3565,6859,13864,19623,4957,3219,9393,4377,14182,14501,6464,12965,16066,6149,1674,15464,13072,7984,5392,7264,3134,8730,13078,17494,8154,18978,5369,1937,1736,2088,1359,19405,2810,19693,18916,12882,15356,8736,11520,10998,1142,1686,11730,19055,19094,1391,12694,12195,15455,6660,1496,11655,15191,4502,17120,710,442,3182,18585,5006,9130,4932,5863,5887,12076,18463,10722,19207,682,5043,7547,154,18610,6900,13168,19054,18661,19937,15924,4705,8275,14402,1789,17958,8733,5841,2043,15365,3338,8357,11080,1935,10861,11938,14027,12514,4438,6294,1046,638,6301,11775,19528,9214,2909,5649,19893,725,19560,8080,9393,8442,786,6258,16942,9076,10671,11152,8231,7216,14029,6903,13896,11806,18298,19070,19411,1896,9108,10296,18229,7890,17966,14308,16198,4089,3175,4633,19029,5068,10513,12553,10061,4152,11948,12845,7641,1077,6953,3148,3684,2454,18341,13621,8484,3211,7280,3768,4522,4685,13003,15822,16915,8024,8408,6964,3022,9449,1644,8437,6318,2927,1900,18833,5254,18912,5801,17566,1156,7222,17611,9863,10952,15845,14766,19804,5508,18948,8465,8932,15508,9702,14177,435,11720,7561,3638,10245,11555,9502,8072,13030,18999,16994,15311,6218,15173,3878,18934,17275,14454,9150,3650,3541,493,12390,2007,4127,1554,19065,183,19383,5779,2701,13887,13195,11641,5742,1847,10803,8681,15017,18816,4134,4560,18163,17842,6455,17119,16225,18670,8215,18744,16255,5587,5046,5795,3415,15424,502,969,9432,15868,7651,4056,4809,18558,14331,15380,10081,17776,3701,1630,473,5536,19554,1909,17697,3547,3217,12515,9167,3299,15421,12743,10163,12232,3465,7183,15330,9219,13388,14687,1527,2195,4836,11920,4807,7790,327,17985,4391,5113,10863,4669,14092,7784,4720,6874,8487,555,14149,15208,17338,7511,18683,13356,8460,17665,8518,1517,12951,14812,10302,14817,10605,18112,5133,8209,16198,4201,11567,3874,2859,18669,12136,7852,17925,1507,13779,14466,3196,6602,13086,6623,12841,15067,10621,17587,13027,14743,3501,11065,10775,202,533,6552,3280,12618,17692,4824,18732,19574,14070,2178,7504,10917,6659,1136,19944,1529,5668,14383,7574,14782,4400,2068,3507,4277,19720,8481,16979,10195,13968,7911,9786,19559,9057,15329,6465,19835,16521,1155,6803,5032,2835,15834,665,16245,16337,8171,16754,4204,7593,11225,5614,7299,1411,1634,14231,8540,4983,16776,17381,1979,18883,16429,9192,10580,16714,151,10510,18544,17885,16809,6144,11229,17701,19591,11919,15971,15559,18250,18587,3736,3415,15536,1167,11136,19866,3663,7127,18841,17997,782,6235,1127,18088,2407,3966,1840,3941,19946,16590,12776,9495,14719,18412,9506,18501,17933,5046,17712,12633,15836,328,11152,15639,6373,15396,1885,3110,6114,18056,16783,4845,10083,15610,4965,14935,3694,12732,761,10801,16338,5446,11913,5540,14297,11227,5884,16253,10282,13445,16927,5955,7186,5163,13388,4314,19180,13577,9130,4868,2912,2228,6286,12835,8030,14325,7827,16554,242,8854,17744,4407,19759,3555,12639,8219,6915,10771,8093,16338,19955,12601,4551,6224,12863,16971,19667,3682,19050,4696,12330,8066,8660,19895,1705,14428,11454,3537,3429,3767,14399,3984,2219,11352,1598,1472,13597,7871,211,2305,12951,7923,15669,6518,9554,1435,4469,11107,11151,11273,6431,18511,1641,19909,18053,8914,8216,9430,11698,14936,4441,6274,10953,1665,1374,17000,1392,7556,12175,8191,4958,6200,5768,701,17328,13139,15749,4562,19009,10995,16172,5364,18263,14604,15657,9130,6301,4924,9685,62,19255,6506,6424,4517,19088,2008,3780,3437,8673,8004,1872,12161,5278,3226,9340,9050,2080,6548,3801,17542,9466,16373,3356,16974,1675,11869,5150,11127,13059,18310,16061,3656,6700,18483,13829,19133,13924,7015,13091,11544,6316,3823,11691,7696,12935,1846,9415,10542,1116,7910,3442,5491,2585,10997,13223,10580,8665,6602,3790,1631,8719,4657,6429,12834,19741,8405,11073,13005,4458,9208,7622,12594,3982,7647,12940,4452,13024,14251,16414,8539,9400,17900,2718,8280,5656,2347,4394,10233,2527,14758,5169,16630,9443,15578,18149,11888,1148,4354,17062,2783,19997,7788,445,14035,16525,3225,13323,13247,18494,3745,10656,19479,4295,12650,17708,17172,6673,9949,2035,16516,6511,7923,4187,11776,1882,15598,8438,15751,19483,10105,11290,2171,11507,7858,11378,8794,12958,3135,5012,15140,1540,5787,14673,19669,2182,972,11376,3427,1275,6309,13411,1746,15995,2799,9200,9999,8574,5233,15629,18509,2105,3629,12427,3053,14667,4096,3571,16597,3624,11385,16885,18335,11312,11976,11933,13869,3795,18049,5636,423,12164,343,19499,7663,1219,15710,359,16856,11122,3876,8319,10026,15415,1140,4871,7729,8180,3108,19624,219,6443,15853,16726,8064,19058,17777,977,12382,6480,5638,12053,14127,19915,3894,16780,6163,2537,13472,12162,11116,8902,9912,14631,19481,4243,11816,2361,1386,15844,1506,10601,4997,3394,15471,4280,15669,7727,19499,3254,8197,10975,14632,16759,9578,7351,6006,17134,19731,10835,15303,12814,4452,19215,17909,3222,12263,19047,11547,4069,3020,16237,18857,8460,19922,17402,6185,2776,14226,1895,18797,8374,12124,9297,134,4165,16040,2255,18980,1252,7870,12606,10582,7753,16333,9470,4800,17165,13038,7612,13770,4333,19400,19842,6281,17700,360,5354,2336,11509,3819,18424,13853,12650,723,801,16796,12806,10104,12437,5319,8606,17245,15777,12569,5286,7162,17590,12437,5064,6926,18292,7286,16908,10932,7273,6665,14141,13281,5912,15126,13102,7051,11136,5219,15481,9898,12304,10846,7210,14985,9079,10745,18315,1000,4628,19803,10431,7116,4341,15218,16936,244,1836,14520,5473,16073,15641,14783,19918,18627,12513,15530,11864,14195,318,2641,19869,16390,2907,2597,17283,15153,14780,13788,18455,5355,7921,15963,7571,6258,16140,13886,9664,3660,5005,3478,5686,11418,146,11576,12074,17111,9885,17270,10368,8732,11535,15692,17107,10832,8439,1418,14238,1311,1915,18861,10484,13640,14321,174,7366,7360,5062,6124,16763,6931,5629,18751,18149,4137,17057,4248,12606,15769,13682,10379,6614,11964,18516,8019,13691,265,4310,19574,13136,3038,19259,12092,10485,967,18517,14336,2463,14642,11039,11164,12311,8015,12718,14148,3213,5347,10070,516,18445,7298,14971,13310,9669,7318,3316,1482,12027,17882,18051,13477,14644,13261,11411,8720,10252,920,14403,16586,9449,2848,5074,8412,1075,1033,19315,3370,17509,15216,7766,10202,8751,2037,9474,6080,3053,6320,711,8096,15091,13232,7908,18444,10451,7857,19480,2479,12152,17668,15668,1547,17730,7824,3834,1659,11489,2205,14015,1055,12077,511,5113,7551,441,5077,2387,10469,8279,2211,282,18231,13683,12752,11116,5407,19725,13620,8581,14660,19781,14152,14401,19483,1592,5921,13426,9325,3063,890,18602,13660,12889,10031,3285,10713,8134,1461,17063,13366,13559,14348,3544,18818,14603,15398,16610,11650,11693,4199,2290,13461,8086,16405,3103,4489,4880,13021,13594,16089,5746,11869,9590,3278,6056,229,19537,18986,9527,684,15437,18070,9911,19020,2586,8887,19271,2751,17918,5594,19349,3217,13373,13851,13520,1514,13545,2469,7435,10890,19969,17989,2956,11789,19086,2545,13904,11184,5648,11804,7500,8541,806,9120,13631,8196,12118,5206,1786,10291,403,13995,7804,2304,11110,3502,8757,14508,5369,6402,8849,2333,17991,5778,9845,12944,1822,3615,5406,14411,18062,2255,7546,4791,4534,13374,16216,4799,13379,15888,1605,6509,15594,5016,3452,8616,1927,10531,827,17670,3754,12927,18425,15296,10172,6829,10368,18294,2301,6887,10605,6955,4304,234,6588,11637,880,10026,6666,2288,436,9416,12953,3676,17852,6113,3686,14701,13977,15929,14954,14864,12034,10965,14850,14426,12567,11508,15530,19143,5578,3918,13384,12547,988,15654,17942,14584,3319,7896,13249,2009,4523,11596,15828,13729,10514,8872,4865,5005,16124,6860,13136,762,1056,11080,1745,12400,13084,8550,11806,1005,5578,2034,9607,16496,18479,18503,9391,2577,427,281,10172,5506,17644,1666,1852,8691,12521,17315,1551,12417,5643,19038,737,3692,1721,11033,3397,3100,9014,7962,10918,3970,10970,11348,2438,2359,18248,1577,375,5594,18027,18588,10503,2543,18483,3351,9689,13782,18058,7191,7825,5729,14104,10212,1793,17980,15406,5923,14008,6147,11440,15354,9632,9108,18032,18384,1064,16604,16003,16663,13526,11341,18927,16380,5519,4001,1317,3224,16628,12299,9309,16578,7206,1839,6509,987,514,11937,8748,13017,6990,7073,13129,17397,12965,15936,12718,1154,6304,13146,12353,12082,10782,1980,17603,7755,17469,14927,13774,17212,1198,14244,7391,18575,18786,19870,8718,7051,16075,6203,17432,6666,2489,9184,14144,3605,17133,13320,2810,18255,11195,17417,19427,4286,10029,4675,19519,2981,3026,9686,15063,9375,18096,11174,130,16897,15351,2218,11525,8525,2720,11815,8811,18196,19788,7330,8298,4983,17932,7502,18029,18870,8528,5216,12745,15647,17612,2728,12491,4133,8256,12990,12891,8923,2272,12573,333,7657,8379,7929,7554,19872,10880,2688,13731,14119,6882,3210,6289,17062,1028,2831,12582,18557,14609,16525,8428,12667,19708,10427,14004,16959,9387,6926,13059,13200,17638,4527,19161,11604,9469,16688,7525,4368,19313,10648,2738,836,11544,14962,13173,6265,6009,6402,1660,17036,15025,14446,12526,969,18355,8170,12656,14392,15573,1071,292,12222,9159,16186,4635,831,12992,1437,17225,10464,4735,348,7974,18785,16891,631,15622,12508,5128,1099,16275,17469,13791,19234,4578,2828,1429,3459,3019,9196,16285,17084,15532,14865,6670,2389,8614,14925,1642,13772,12384,2393,18223,16679,11134,8323,8863,9848,3072,16848,12812,7733,7904,2137,18128,9704,11969,12341,3452,4159,12095,9670,8819,18629,17541,14668,359,15689,17203,122,18917,2067,12795,11926,3987,14215,18430,18076,18653,18448,2331,19846,13003,8561,15610,10876,10992,8448,13712,4582,17163,13663,178,5205,5008,9135,16969,15365,6572,5448,15265,10387,15280,15609,2032,13584,4164,10546,12637,3800,7270,2810,2439,19096,2203,13390,16321,3416,2996,17143,13996,16036,13779,17390,14363,609,6984,6409,8714,4070,17882,3150,2560,13619,19689,1174,4475,12797,15389,7896,3707,3617,508,2156,18222,15172,16257,17683,1675,19155,105,16299,5631,8663,7337,3164,16026,4215,16843,8882,15275,14868,8078,3766,17042,5721,12999,6961,7904,2679,17061,10030,19075,14402,19771,15388,18860,3555,8693,9081,39,19870,17203,16135,4163,13255,15360,7240,6444,7840,15914,147,14160,15672,3381,774,2910,527,15030,3734,15090,13401,19621,13097,15586,13660,693,10717,659,17433,17414,1931,11315,4780,4047,2013,6140,9820,18194,12619,6130,10505,10183,1943,11170,11309,7735,11148,5865,10221,16354,6966,16576,19849,19725,17893,17935,6755,3107,16568,996,9129,11716,13,6965,6766,15315,247,12407,351,8068,2425,2208,14311,3566,8885,10343,16963,118,11077,22,15619,12677,6885,2868,2497,19227,9565,11268,5095,5771,15782,18477,12664,19985,18776,4926,8117,19924,19212,19591,3966,16472,12107,4046,15138,8025,7548,15675,7016,17704,7806,14071,1814,7477,4379,13899,9974,16295,7316,17824,2369,14510,10043,2566,7076,8331,6812,6967,4222,10753,11545,2086,6916,6133,19854,16389,13658,17306,12128,11307,5272,5340,15631,8979,910,10902,9158,669,17141,17341,3432,15491,19824,15649,9613,6648,11894,5542,17085,13466,16264,9528,18096,19223,1625,14067,1982,2784,4793,12595,4442,8268,14255,4304,18345,9311,3567,6141,14472,2233,7010,2911,13132,5058,15070,10475,4236,9708,9218,4868,8107,13239,17477,15182,3721,9684,10700,14778,14686,13914,173,11710,13039,18042,16967,18020,3977,15513,2316,17161,11645,6338,16678,19797,17686,12718,5506,4320,1086,8749,5168,13259,4118,13450,4934,14799,3185,1638,19117,10953,11664,17624,6594,9412,6468,16168,5310,11649,1144,7362,6599,16165,17866,1571,7903,3575,15623,218,1009,18756,13561,3926,4446,8337,13921,10645,10453,8453,2176,9698,19391,14628,14183,17640,149,4126,6051,27,3219,3734,5157,6778,9772,470,7197,10980,4549,11560,19581,893,4733,14011,8361,2593,4967,18093,10417,19868,10351,19518,11289,16955,6042,7206,1350,7972,12520,5802,13282,11857,7845,16587,2297,10946,2163,531,9996,9057,19589,14648,5033,11269,1619,6427,16557,6929,16133,11381,11348,6141,16254,14833,2428,34,19190,15721,14464,14762,6571,6278,3673,8125,18392,6635,2687,5140,6383,15072,8730,4969,3633,12824,8546,4232,10413,14714,16692,805,12396,15288,17692,13104,17975,4338,4954,12336,2727,12388,10360,2961,15449,17340,18588,5515,16808,13694,16152,15954,8940,9055,7054,16628,2941,15557,9573,14213,12510,18408,11988,9467,7566,13902,12072,12442,5135,7047,9711,1175,7078,9193,10202,3714,2313,2525,5603,11273,718,8974,27,6829,1094,12627,352,18022,3834,8365,6806,2322,12191,7697,1031,16647,9678,4348,18515,3569,9531,6779,19276,14806,112,9557,13615,15865,8126,19376,9441,2565,17765,6391,2098,1135,10644,6639,5376,488,17243,5960,13524,8997,10961,18021,2419,4265,13112,17034,9102,9369,7637,14286,13550,15054,19588,8715,7107,667,6181,6457,13526,655,4919,15807,7632,11520,1033,4903,12627,14086,7298,16097,15965,13014,4397,347,12487,7302,114,6431,15984,17620,11743,19436,803,3346,4787,16099,17703,1465,11587,19826,15527,2785,5518,8263,12203,3897,11301,9752,1632,8078,17017,19108,6679,16784,2127,10091,8116,8808,8066,11928,13989,9850,17535,3806,18813,2261,515,4132,4607,5696,6822,10498,16012,2026,9124,14198,15464,3502,13725,15741,15903,13241,7530,13145,5914,6447,4667,1964,8460,2802,2824,14617,11471,6309,7999,17694,1459,5420,14844,4841,7506,3406,13453,6651,3918,6291,5765,11663,1307,1014,5832,15600,13113,14428,9758,14609,9854,16051,12108,6589,14750,15592,3742,18547,7283,4241,8168,9545,7332,17688,6120,11615,15955,18136,12428,10381,9476,8808,19054,14491,4048,17122,14904,2589,2583,13655,16439,15453,11813,7545,10830,1664,15992,4045,19195,11043,9166,13253,2626,9906,4191,10362,10150,17723,11663,15845,1944,5221,8541,3409,11911,2242,3584,5896,9913,18674,2964,13452,13430,9869,19716,15277,10070,13115,14001,12024,7287,8813,15218,17429,13220,5419,10601,9515,1954,12037,14039,16183,17010,484,2353,12957,11315,17000,3788,2752,4408,6536,7850,11957,4986,8168,11588,897,19974,9301,6158,12617,19855,11389,14751,12822,13981,11010,12608,2807,9047,1043,2477,3692,16342,2823,280,11955,7619,7880,16059,14291,3764,18581,17443,5591,16579,6442,3436,2726,12718,4342,16757,5783,9013,13653,9609,10900,11679,2382,17567,16263,19470,8472,19132,3295,5885,19623,17628,8553,6517,17429,16993,3996,2174,9295,10919,16501,1123,10362,11405,9523,6596,12788,3798,3662,11224,4100,13728,11729,11660,4915,14913,13724,1835,12480,13700,19091,19575,4725,19733,4284,12943,12974,5713,7606,9917,15858,472,2473,11913,11497,972,16127,16114,3367,1246,13600,4642,9865,13829,14085,9311,2350,5599,11290,1503,4573,17969,509,11169,218,16329,10246,384,11769,11864,10726,9533,503,1296,17065,13036,13816,13414,16159,5194,16389,15517,14216,16585,11133,9094,9902,17484,1611,464,13123,18050,1334,16488,9990,6131,10507,10079,8102,1161,17904,11331,13376,5452,549,3153,10774,16099,17376,2461,8650,6497,6655,14695,17321,18655,14021,6168,282,18407,5574,5018,10215,2285,5038,3478,17668,7795,4074,12256,13127,16690,14865,14615,1187,2230,15007,4068,5110,7507,3732,4586,1514,10181,7194,2145,12480,10065,8159,18923,2443,7078,6241,13404,4914,12513,16726,9525,8674,2017,15100,13812,18550,6149,2485,8796,15114,3479,15675,1113,15034,19049,2311,14833,710,5905,18527,6272,10177,250,15208,16715,11372,7954,9263,12315,8107,756,5359,9713,494,13775,17464,14525,11919,14465,18104,13591,6253,9609,8168,11744,18858,3002,3174,19465,5896,12929,11649,17501,6737,3932,8215,765,15380,10994,1395,3987,6596,9294,13827,11280,9606,19830,13911,17484,14340,35,13108,6567,12777,18942,17120,9586,13198,18256,17650,11439,14580,8870,9026,10750,3994,13365,1420,1410,506,9594,13322,14162,17262,10671,14094,15924,15990,18656,14047,13082,9464,10315,13854,11162,17741,19944,7037,19846,14912,14329,9491,10887,16340,760,18785,6832,9256,10017,7176,7961,6310,179,6302,5082,4137,7805,16907,12339,13525,16210,11937,1028,832,7977,13729,16545,14890,18638,11130,6842,1358,18982,485,13746,18208,7330,17350,5954,3923,8767,1909,11651,1800,4207,15651,6212,7774,6990,17116,12585,4654,14733,866,11517,13559,3672,2034,5642,639,17570,4981,16383,6981,2081,5904,665,1563,14204,3798,172,12508,11281,19200,6304,18013,3646,5345,6610,2581,17377,11457,17476,8020,13300,16318,9109,3877,11622,4195,17382,1510,2291,1737,555,10590,15926,17262,17097,6462,14176,8383,19049,16659,8289,269,8959,11277,14241,8010,2602,10868,6775,5607,452,1108,13638,3756,13066,3114,16280,6478,10771,16547,401,14068,18794,2541,7645,16863,10122,8323,15756,11891,19497,3172,10443,11829,16929,9796,15900,17453,19277,17032,9508,19011,7001,10202,12627,14613,2371,7808,17481,2018,3189,14774,13710,14445,15313,16016,7541,18847,3090,7432,9208,13732,2901,14182,15820,5663,16209,12086,377,10007,10897,11919,12981,7471,14359,3819,15565,3352,6708,9936,6055,10137,6302,15964,4710,6015,6320,6302,9185,4022,11792,17370,4627,13780,14704,542,2340,2186,1802,1447,14096,18746,17747,1779,19133,17026,6429,5265,14175,17056,16996,7129,5195,18605,15840,9505,4960,6091,17999,1364,6419,4827,11473,13946,11849,9277,10574,14867,11829,6527,6649,16246,14247,14923,5134,10561,13425,4559,6320,16499,16947,3520,10380,15477,13815,12117,896,1003,17092,19904,19462,2243,854,15221,18866,18128,9651,16267,1440,7788,5743,5853,15084,4898,8485,1801,12084,4349,536,12708,9499,17580,13244,9834,16941,16217,4378,14834,12045,19737,5972,12344,4753,14182,19274,4087,719,16579,8243,3817,8101,1950,11048,13918,6200,10616,11236,14494,243,7551,9644,17453,8609,7541,7644,18397,2172,11374,10056,8524,18319,6492,19234,16385,13822,2771,6009,2397,13373,1081,11046,9580,11948,878,12214,13735,17135,9128,13589,18652,18558,7018,6963,6983,624,569,14177,4411,13138,9960,13821,6437,6907,7272,3436,18580,10443,8155,8089,3697,19779,13915,5598,7568,7895,19405,17749,19506,10163,9116,19293,9160,5458,15969,270,7510,12005,10256,2429,9477,3809,13715,2875,8264,443,13518,13745,7760,11357,12875,9131,15629,4447,4488,15462,12810,11745,4851,8986,9704,8353,3866,16633,12544,11913,2170,7833,15030,1707,5286,11279,13446,4052,2660,19491,17521,3320,1963,18254,14862,7148,8766,5686,16579,14420,8039,12527,19281,6652,693,9905,17196,5983,7974,16178,16393,20,18044,12658,14692,5179,11181,2692,14762,16929,17088,677,13367,19513,10006,5329,3525,5673,3439,17592,8230,17981,9210,3983,5476,6387,19489,12108,18384,9910,12077,17223,8662,4289,13607,8905,11689,1297,10847,14076,5968,17651,9518,14772,12241,1580,19193,16593,3890,8641,2900,9981,9322,9975,7992,12050,18175,2409,2675,16950,7536,11023,11082,1880,5616,5589,4825,11279,11517,15060,10273,2304,17837,2934,638,2694,14070,3531,2417,9055,10492,14434,11421,2252,310,1288,14953,6505,13676,9560,18894,11832,3609,16487,2254,7496,2552,8013,17742,4497,5521,1829,360,12805,10540,5239,8663,11189,9893,12711,12351,2790,6476,8278,7052,7995,15439,13093,7943,5506,10926,2403,4765,17801,4181,18151,10046,10295,1616,5849,15057,18597,1131,9401,4379,6347,18249,4192,7187,6096,19344,7512,11192,7803,17833,17943,10576,768,3869,12532,6008,18154,9236,3719,19144,16358,17252,12911,6175,11347,7372,19286,9598,17521,7,4085,2372,8483,17567,3796,3805,17310,18682,14277,2472,6411,4828,17190,14446,14431,1136,9369,7154,14697,8118,10405,8890,15691,8837,16846,11471,6459,10620,150,11346,3797,4666,17559,16224,10503,18596,10244,10803,7609,1729,7224,5187,2077,5651,2280,10858,17970,10701,2481,9741,6174,16850,4927,2903,19041,7029,1845,8522,6840,1188,852,7394,1405,11354,14231,12984,7114,11963,1192,3720,16191,3693,14424,2668,12245,11977,14814,12861,10179,13390,1683,396,3754,14742,9418,1043,13306,16767,4261,19886,6900,6923,11801,11969,11827,15177,15399,3822,3051,10162,5408,6199,701,5021,19602,5485,2170,16929,18215,13669,2696,3240,10101,2924,14865,1274,7774,8702,11635,5642,1542,15063,3237,18909,10411,16637,15042,15711,12161,4292,13023,11215,9344,4952,18278,19053,3056,14221,15357,13546,9031,9180,3454,17774,14636,124,18386,11209,12401,16615,16138,13134,1338,18885,19234,8399,9631,14286,13995,4633,15484,19894,8109,9099,609,3242,9202,14321,16509,3763,19237,5089,15401,18738,5971,10986,11454,2747,15965,9317,796,3931,8427,17565,8006,1712,14425,11488,6709,5981,4789,16471,3537,17925,16107,1768,7099,6590,19990,4782,4977,75,10006,15414,12452,13509,11800,2132,3483,11652,10637,3464,11139,3872,18716,807,4821,4483,3464,1999,10737,15052,8787,4286,3570,7653,17932,6231,4153,4814,2032,5173,7938,17402,4361,3761,13045,10574,18187,5901,16405,16697,16676,11291,12542,2855,14572,17621,2269,11256,4738,4005,11377,14329,18715,12981,19369,883,2811,6007,10957,9742,18973,13391,7901,18335,15086,15709,1941,2063,7636,19933,13310,4016,4458,13811,16619,443,17373,4339,19184,11906,12957,1249,11913,751,13880,690,1557,17490,9992,7796,15892,1552,19368,6491,18165,5705,5495,1052,19828,13192,17525,12567,17489,2937,15287,2866,12210,9127,16147,14465,8247,6718,15106,17671,3748,3757,5998,10187,6389,14849,14042,2690,4990,18475,1182,6619,13270,13938,11806,1338,11661,2911,4593,2167,8247,14373,10104,1546,13023,920,15978,6981,818,13866,5645,18300,5998,16375,17689,9788,7897,3631,7782,15864,1655,8412,17147,9408,5151,19708,4116,7361,6923,11593,8536,13393,2194,3576,9738,4156,16187,12062,3153,14181,12552,4231,1795,13945,11368,16045,15609,869,7147,11760,9463,15048,17285,8370,18052,8262,19630,19071,14864,19193,7991,6338,15251,4902,265,1454,5841,4056,562,3430,1729,10260,11324,12518,15673,9866,13685,4092,13711,6005,7204,14799,11664,328,10484,19627,11264,1639,12159,3358,16530,12010,13186,15752,19737,8790,17014,42,5484,19877,18506,16526,997,6008,265,6398,14039,19714,10394,6140,13544,18031,10457,19193,5279,18860,9303,4256,11196,17681,930,11010,7081,15098,10047,4627,10163,17907,15659,5641,10474,13047,18981,12364,13520,14897,1054,4039,7782,192,19853,4947,2407,13219,3419,4775,17154,3365,19175,5645,9290,18122,14525,2936,2090,16402,3860,18110,15101,12628,2692,15464,14574,1086,14389,14901,18091,13053,19857,1949,19906,1279,18659,10986,7585,8616,1135,7227,14542,6071,17257,489,5525,9409,4147,8717,13816,4759,9289,5137,11417,10734,14899,5490,13407,6873,1453,5873,5321,131,17105,3228,6104,18929,8666,13768,6834,7095,11139,13617,11266,9495,13612,11019,16540,16228,18108,12803,5352,15182,6725,4026,19189,3144,14452,15838,3042,16433,92,15398,4002,18147,1000,19370,2650,4218,9739,4781,13446,3792,6440,8581,18276,3548,3166,3948,8771,5292,13614,14155,8902,15033,2782,17762,4411,1327,17831,16356,11545,2898,15368,1886,13659,5504,6047,6573,2328,6697,9087,3083,2612,10360,11547,6258,9325,1196,10962,15276,10637,19952,13914,483,10151,16885,4232,2902,2156,1386,10028,2932,17482,12143,17059,6443,1666,13230,7114,7874,5333,14977,13032,10792,10193,5003,6671,6226,7625,1859,6006,17341,19528,5978,2275,17826,15250,11953,5761,18307,13615,15210,18651,19538,6276,5806,1693,3627,10211,716,9005,10144,6666,18748,3238,683,12461,17550,17394,16615,18088,15169,4102,16452,11181,12443,334,5629,8388,18145,15892,7867,2783,20000,19690,12071,14952,1541,9973,10590,927,7029,19931,14465,8146,331,14301,19952,10541,15619,15559,6093,14326,469,5761,1316,4832,7132,14092,13747,1735,1628,10988,18496,16849,14122,12367,8854,7486,7129,16217,18461,10410,9310,4404,10956,3284,7522,15201,4909,2913,17291,12822,15947,12674,7390,6590,7325,17599,17676,16853,6094,3144,18197,7061,665,16066,13949,7727,6737,1347,7211,9258,12744,12994,3317,10558,13236,14575,11674,7471,1227,3265,7989,16898,1604,1448,15859,18314,9268,7330,16321,19713,14606,16514,10757,16414,2605,16751,10981,12517,2620,9592,16129,1157,12415,17027,15237,19339,3751,13664,583,7228,18032,11948,13675,10936,14754,733,16210,2296,2334,11731,5740,12313,5823,13471,5639,12282,16616,18404,14213,4382,18299,8105,19593,18186,15840,7361,4,14372,10739,10281,6049,3241,6908,4082,12574,12762,17994,849,16587,1924,13012,3372,5318,19140,11913,11534,10272,3133,10270,11756,3994,19465,13675,7623,16201,17897,9703,4749,5629,10270,17580,14373,1780,19074,1008,19037,5382,8006,15940,15130,9205,18532,8882,1680,19629,12797,14068,6693,2206,6582,2579,11473,495,19340,2622,14170,16280,12465,3850,18853,2566,3541,8198,13449,17511,5970,3464,11357,18005,1571,19905,17260,2162,3308,14522,16193,13750,7643,17870,825,6148,19661,11511,19572,872,9099,6151,5447,19532,9218,18183,476,19918,869,13434,598,2309,14618,9162,10415,44,13581,16943,932,12632,11509,8136,13083,2898,14315,522,14269,15271,4342,4277,106,2354,13744,2792,920,13936,6881,9200,19993,4573,13950,11244,9755,11132,19769,19520,1800,7126,10552,3394,1655,18457,14278,2092,5482,11824,13474,11150,3021,16203,18602,15646,19732,2867,9656,14132,7253,14422,1428,4945,1837,7548,4385,17871,16330,11535,13808,15452,2549,397,6680,14940,11832,6116,15480,10615,8094,1923,9548,11313,16599,5740,11217,18295,369,14708,9322,17764,14070,3687,3982,8002,17453,8280,7066,5342,9098,3165,18533,16994,10053,18884,12002,16425,11573,10895,4069,9235,4006,8683,13034,12292,7753,2988,15771,12088,16541,18444,18304,7726,4820,9608,6426,18935,4905,1514,17553,5326,8241,8878,3504,10150,228,9705,6697,1977,15217,17148,13898,12794,12961,4162,19422,18996,12190,18283,4367,16467,12478,13,3051,3325,17087,11132,1642,9679,13126,1679,3516,10763,7539,18757,11144,7585,15506,2746,10282,9403,15104,8851,4399,775,6254,6352,14661,18087,15024,1307,16369,5701,7277,14367,14256,8657,6952,15193,19066,7802,17027,10722,13047,19048,4427,6242,8859,15833,6187,9971,17391,6219,14583,2865,16209,9330,4940,1619,8339,7078,4301,18871,14575,384,7397,4058,2509,8200,8657,12995,4309,12558,8956,6953,3092,806,12644,6908,752,18269,11532,8333,10089,5367,14028,6100,18753,175,3849,2996,18600,11099,568,13821,15036,11261,19789,12636,5188,14168,1988,15532,6444,290,18611,5154,1986,15534,10988,7629,15820,18844,17445,19987,1526,15796,2649,5979,5837,7288,16241,15178,5493,11513,6837,15039,16028,15602,14610,18632,12236,18635,18561,2928,19139,8846,13455,15367,4823,6888,12319,4964,18404,9012,8619,13019,15206,9808,7314,1244,49,5713,7329,8729,7811,18510,5620,1766,2024,10693,3592,5492,86,12067,12685,7949,410,5614,11799,9694,19596,15738,1131,6009,3405,5292,5389,19773,15479,15670,10477,19667,10250,6869,17347,10812,13543,13911,16397,3408,7215,12112,13043,16537,3277,7245,12611,8104,17541,45,15463,7133,6625,6532,5575,550,9603,14346,720,36,8393,7148,4171,4457,1330,3755,5552,6365,1159,12076,17376,7269,4792,293,5249,6808,17177,2645,12611,17485,17482,11893,7089,12726,658,17688,13581,11765,8584,18060,15693,9568,1805,18730,13001,8331,9172,11666,103,10597,18220,15468,5249,4318,2849,12999,14682,7942,9988,335,2651,14030,13218,9973,427,7153,3775,5054,18120,18106,13480,8237,15916,6538,510,16571,3071,10742,11560,12644,792,4305,8652,12462,3220,13928,3954,12985,18890,4637,3949,13287,3450,4346,11119,6352,11505,12875,12548,1874,2779,7084,18357,381,7204,6589,16760,18214,15792,17957,14713,8125,969,240,10109,13896,17781,964,8674,15735,10841,3674,15373,14986,13450,13848,19271,15700,2817,4430,2814,9538,16126,14150,8467,19455,11818,1955,5587,1003,4006,7951,774,2593,12784,1490,18238,12843,9736,3010,18851,3220,14873,13685,17061,9251,14891,1113,7044,16584,19226,18815,12247,398,5744,8029,7052,385,7814,1186,1172,18370,7956,8227,2652,7523,11259,8237,5634,12637,10403,17970,8411,15426,9370,9443,13324,15159,4811,19809,8208,2620,766,4434,15889,19580,13100,10593,16338,6499,14459,8877,6331,16207,8711,9513,2588,9870,14302,11050,1184,2471,18257,2780,18326,15144,7786,14072,7417,13873,18624,10871,15105,15346,13162,10556,12060,2950,5834,11341,15180,13130,12504,4220,9004,8634,7242,18706,1935,7356,935,18095,5244,10349,16229,5099,12112,15794,7224,4327,10276,3802,609,13557,20,11291,8728,4502,18187,13543,3398,7618,316,8990,2770,11812,1045,2344,9712,19931,7209,19470,10397,14831,10308,4909,7431,675,6387,2136,1458,18389,2408,4535,18550,17146,12297,9517,8406,10336,11451,6090,8102,19885,10493,19161,17036,18968,4805,11439,7055,6961,6023,17909,19195,14834,2968,12412,7475,19592,12805,120,7439,8799,9958,4331,11550,11947,12185,7278,13817,10302,17027,3094,1042,5113,9380,19190,13366,5203,12427,9366,18144,6418,5442,13400,12498,10884,62,11097,15433,15611,2741,542,2873,4985,17835,11758,5174,16312,14796,3483,7036,1925,10600,3109,15207,3251,5331,8637,3909,17229,12706,5627,2234,14699,19297,16614,17927,6068,12562,16595,15031,10824,17590,10956,2635,19123,4104,18881,10320,7852,15010,9091,8113,17439,5855,7930,8200,13625,9975,526,6736,8080,4595,6617,15654,10198,4347,16131,6442,9084,9753,10071,10867,10192,14089,12873,6878,1915,1065,2264,15217,10315,9147,1629,1478,8850,7248,5125,1877,17540,12621,3258,6996,15561,2936,15040,3155,4958,14839,16629,15389,15239,13143,5456,6299,11786,3883,6127,15568,2311,11651,14162,9401,11901,6876,10465,19605,14066,18497,6959,3266,11282,13339,11707,7101,15162,16547,11515,5336,18767,19384,15459,10107,6959,9430,17257,6205,17343,13963,10041,13736,7528,10318,12994,7315,19597,15574,10685,1328,7005,2333,10338,14069,384,7590,17449,14817,3895,7205,14,1363,340,16968,18238,12480,2613,12667,19655,18555,161,18702,17391,19412,16013,3180,3634,1790,12113,2568,8623,7526,12468,6365,12194,7945,12948,7487,10431,1822,9560,12656,16028,16052,19298,14096,5217,9666,12216,12742,18381,17955,16648,8371,4565,18888,2896,12992,18482,18981,19145,2177,8380,3992,1651,6194,9372,8795,5846,7230,6875,10628,7888,17484,7367,6741,14040,19533,6241,2225,12598,862,7246,5789,7348,6934,16047,8261,10269,12701,4695,8798,15917,7297,15951,6887,12107,13646,9904,2247,14860,1808,15097,8563,11010,13555,5184,11545,6567,11444,3830,8456,1596,18152,7415,6364,8362,2188,1219,6419,17921,13765,1500,12259,19126,2589,12910,13482,3426,18891,12702,15381,8570,10206,16705,7471,14094,9386,12489,10272,15200,11755,12679,6801,700,14569,3568,7502,7838,17829,10461,6412,13164,5023,4402,288,716,16621,1290,9499,18538,7652,7629,16139,92,4209,8393,4360,14674,7547,12700,11163,13778,2303,17696,10105,1745,2698,15581,13299,5628,1642,159,10770,13905,19938,16974,6905,17862,100,3632,6323,9919,15417,4447,716,1818,11383,2921,12051,14756,19313,7255,1340,17819,19653,9338,19119,8441,7052,11818,6444,4728,19617,16118,18938,18324,4473,13395,1995,13184,12234,9042,7869,4755,14467,12903,6187,5204,19580,14230,19004,10049,13284,2931,17834,3995,3408,7363,7388,12833,15090,8537,15044,3766,7863,13444,13677,17220,13104,10703,842,18769,3960,2457,18149,7740,971,3307,19979,16525,17469,6638,2275,15781,16539,4099,17868,19629,9542,4680,14855,12937,11119,18526,3296,2263,2165,5920,15930,14837,6746,7683,8156,2000,4833,17051,13555,14215,19571,17372,11193,10757,10683,17129,6392,9264,10837,1340,6416,8103,8392,11609,8909,7084,7989,8711,19646,3675,9821,2384,6725,6158,10230,11696,8404,3900,16136,12832,10961,10622,14939,11637,19923,10053,8353,1577,13273,4197,12062,14267,3467,6988,9009,10000,1029,12857,2475,10243,10982,18512,10485,13399,9232,4880,9814,5504,19651,980,19064,4745,11411,18643,446,2227,5068,1316,6687,7233,19467,19044,2795,19539,19183,13826,1734,13116,10888,4561,5201,14348,14938,17708,5061,7897,8718,4037,3638,16725,10290,9625,10739,15752,6301,13364,2766,18000,16194,8974,1310,11013,6473,9728,4830,14822,13104,9071,2097,15205,7652,13945,19278,3228,11496,6080,18015,2319,18374,5895,19421,18199,16199,19558,14126,10713,15599,6329,19170,19155,7903,75,5430,11038,17714,2436,8491,167,6443,15368,18715,10076,17435,5884,8174,2572,18831,15596,10449,3983,607,15077,4150,18858,19273,14764,11813,2344,4910,15851,14286,1855,13024,4518,13404,13911,13180,3046,17171,5191,18677,19943,7401,7744,14792,8872,8767,9249,19341,688,9410,8205,16215,2590,10231,16222,2466,15279,5241,611,12267,4222,8532,15981,12714,13729,19980,6097,13827,15880,6825,3365,13261,9213,19175,10068,18890,15234,6563,4011,14871,2005,3361,19899,17825,10776,12538,9246,8355,14321,10753,9772,6681,6852,18278,5442,3557,5498,4242,8396,13788,15359,3146,14820,18582,7934,19361,769,11900,212,13804,10901,10509,731,13384,6714,12982,16589};
    int l = LEN_M(m);
    printf("%d.\n", sumSubseqWidths(m, l));
}

#include "./880_decoded_string_at_index.h"
void test()
{
    // printf("%s.\n", decodeAtIndex("leet2code3", 10));
    // printf("%s.\n", decodeAtIndex("ha22", 5));

    printf("%s.\n", decodeAtIndex("abc23", 17));

    // for (int i = INT_MAX; i > 0; i --)
    //     printf("%s.\n", decodeAtIndex("a2345678999999999999999", i));

}
*/

#include "./878_nth_magical_number.h"
void test()
{
       printf("%d.\n", nthMagicalNumber(1, 2, 3));
       printf("%d.\n", nthMagicalNumber(4, 2, 3));
       printf("%d.\n", nthMagicalNumber(5, 2, 4));
       printf("%d.\n", nthMagicalNumber(3, 6, 4));
       printf("%d.\n", nthMagicalNumber(5, 6, 4));
       printf("%d.\n", nthMagicalNumber(2, 6, 4));
}

int main(int argn, char** argv)
{
    // printf("INT_MIN %d, INT_MAX %d.\n", INT_MIN, INT_MAX);
    srand(time(NULL));
    int i = 0;
    // while(i++ < 1000)
    {
       // printf("=========\n");
        test();
        // printf("=========\n\n");
    }
}
