using System;// means that we can use classes from the System namespace.


namespace HelloWorld // namespace is used to organize your code, 
//and it is a container for classes and other namespaces.
// A blank line. C# ignores white space. However, multiple lines makes the code more readable.space HelloWorld
{
  class Program
  {
    static void Main(string[] args)
    {
      Console.WriteLine("Hello World!");    /*Console is a class of the System namespace, 
      which has a WriteLine() method that is used to output/print text. In our example it will output "Hello World!".*/
      
      
    }
  }
}