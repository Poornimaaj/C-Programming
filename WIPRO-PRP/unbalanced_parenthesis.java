import java.util.*;
import java.util.*;
 
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan=new Scanner(System.in);
		String s=scan.next();
 
		String firstPass = "";
		int parenLevel = 0;
		for (int i = 0; i <s.length(); i++)
		{
			char c = s.charAt(i);
			if (c == '(')
			{
				parenLevel++;
				firstPass += c;
			}
			else if (c == ')')
			{
				if (parenLevel > 0)
				{
					parenLevel--;
					firstPass += c;
				}
			}
			else
			{
				firstPass += c;
			}
		}
 
		String secondPass = "";
		parenLevel = 0;
		for (int i = firstPass.length() - 1; i >= 0; i--)
		{
			char c = firstPass.charAt(i);
			if (c == ')')
			{
				parenLevel++;
				secondPass = c + secondPass;
			}
			else if (c == '(')
			{
				if (parenLevel > 0)
				{
					parenLevel--;
					secondPass = c + secondPass;
				}
			}
			else
			{
				secondPass = c + secondPass;
			}
		}
 
		String result = secondPass;
		System.out.println(result);
	}
}
