#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;

struct Point{
    int x;
    int y;
};

struct Rectangle{
    Point p1;
    Point p2;
};

int get_area(Rectangle rec){
    return (max(rec.p1.x, rec.p2.x) - min(rec.p1.x, rec.p2.x)) * (max(rec.p1.y, rec.p2.y) - min(rec.p1.y, rec.p2.y));
}

bool are_intersecting(Rectangle rectangle1, Rectangle rectangle2){
    if((rectangle1.p2.x <= rectangle2.p1.x || rectangle1.p2.y <= rectangle2.p1.y)
    || (rectangle2.p2.x <= rectangle1.p1.x || rectangle2.p2.y <= rectangle1.p1.y))
        return false;
    return true;
}

Rectangle get_intersection(Rectangle rectangle1, Rectangle rectangle2){
    Rectangle intersection{};
    intersection.p1.x = max(rectangle1.p1.x, rectangle2.p1.x);
    intersection.p1.y = max(rectangle1.p1.y, rectangle2.p1.y);
    intersection.p2.x = min(rectangle1.p2.x, rectangle2.p2.x);
    intersection.p2.y = min(rectangle1.p2.y, rectangle2.p2.y);
    return intersection;
}

int get_intersection_area(Rectangle rectangle1, Rectangle rectangle2){
    if(!are_intersecting(rectangle1, rectangle2))
        return 0;
    return get_area(get_intersection(rectangle1, rectangle2));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    Rectangle truck{}, billboard1{}, billboard2{};
    cin >> billboard1.p1.x >> billboard1.p1.y >> billboard1.p2.x >> billboard1.p2.y;
    cin >> billboard2.p1.x >> billboard2.p1.y >> billboard2.p2.x >> billboard2.p2.y;
    cin >> truck.p1.x >> truck.p1.y >> truck.p2.x >> truck.p2.y;

    cout << get_area(billboard1) + get_area(billboard2)
            - get_intersection_area(truck, billboard1)
            - get_intersection_area(truck, billboard2);

    return 0;
}