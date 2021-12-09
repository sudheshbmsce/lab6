
import java.util.*;
abstract class shape{
int a,b;
shape(int x,int y)
{
a=x;
b=y;
}
abstract double printArea();
}
class Rectangle extends shape
{
Rectangle(int x,int y)
{
super(x,y);
}
double printArea()
{
double c1;
c1=a*b;
return c1;
}
}
class Triangle extends shape
{
Triangle(int x,int y)
{
super(x,y);
}
double printArea()
{
return(0.5*a*b);
}
}
class circle extends shape
{
circle(int x,int y)
{
super(x,y);
}
double printArea()
{
return(3.14*a*b);
}
}
public class sudhesh
{
public static void main(String args[])
{
Rectangle r1= new Rectangle(19,30);
Triangle t1= new Triangle(20,30);
circle c1=new circle(5,5);
System.out.println("Area of Rectangle is:"+r1.printArea());
System.out.println("Area of circle is:"+c1.printArea());
System.out.println("Area of triangle is:"+t1.printArea());
}
}