class A extends Thread
{
public void run()
{for(int i=1;i<=5;i++)
{
System.out.println("\t from thread A:i="+i);
}
System.out.println("exit from A");
}
}
class B extends Thread
{
public void run()
{
for(int j=1;j<=5;j++)
{
System.out.println("\t from thread B j="+j);
}
System.out.println("exit from b");
}
}
class C extends Thread
{
public void run()
{
for(int k=1;k<=5;k++)
{
System.out.println("\t from thread c:k="+k);
}
System.out.println("exit from c");
}
}

class ThreadMethods
{
public static void main(String args[])
{
System.out.println("start thread A");
new A().start();
System.out.println("start thread b");
new B().start();
System.out.println("start thread c");
new C().start();
System.out.println("end of main thread");
}
}
 