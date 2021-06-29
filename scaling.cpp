#include <iostream>
#include <cmath>
using namespace std; 
typedef struct {
float x, y,z;
}
Point; Point points;
Float temp = 0; void showPoint()
{
cout<<"("<<points.x<<","<<points.y<<","<<points.z<<")"<<endl;
} 
void scaling(float sx, float sy, float sz){ points.x = points.x * sx;
points.y = points.y * sy; points.z = points.z * sz;
cout<<"After scaling, new point is: ";
showPoint();
}
int main()
{ 
  float sx,sy,sz;
  cout<<"Enter the initial point you want to transform:";
  cin>>points.x>>points.y>>points.z;
  cout<<"3D Scaling"<<endl; 
  cout<<"Enter the value of sx,sy and sz: ";
  cin>>sx>>sy>>sz;
  scaling (sx,sy, sz); 
  return 0;
}


