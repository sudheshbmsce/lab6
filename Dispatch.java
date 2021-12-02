class Area{
int a,b;
Area(int x,int y)
{
a=x;
b=y;
}
double Area()
{
System.out.println("Area is not defined");
return 0;
}
}
class Rectangle extends Area
{
Rectangle(int x,int y)
{
super(x,y);
}
double Area()
{
double c1;
c1=a*b;
return c1;
}
}
class Triangle extends Area
{
Triangle(int x,int y)
{
super(x,y);
}
double Area()
{
return(0.5*a*b);
}
}
public class Dispatch
{
public static void main(String args[])
{
Area a1= new Area(0,0);
Rectangle r1= new Rectangle(19,30);
Triangle t1= new Triangle(20,30);
Area r;
r= a1;
System.out.println("Area of area is:"+r.Area());
r=r1;
System.out.println("Area of Rectangle is:"+r.Area());
r=t1;
System.out.println("Area of triangle is:"+r.Area());
}
}