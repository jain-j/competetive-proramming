import java.io.BufferedReader;
import java.io.InputStreamReader;

class CryptKickerII
 {

    private static final String plain = "the quick brown fox jumps over the lazy dog";
    private int count;
    private String[] matrix;
    private int[] map;

    public static void main(String[] args) throws Exception
    {
	Main main = new Main();
 	main.run(args);
 	System.exit(0);
    }

    public void run(String[] args) throws Exception 
    {
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	int cases = Integer.parseInt(br.readLine());
	String tmp = br.readLine();
 	matrix = new String[100];
 	while (cases-- > 0) 
        {
     		count = 0;
     		boolean found = false;
       		while ((tmp = br.readLine()) != null && tmp.length() != 0)
        	{
 		 	matrix[count] = tmp;
  			found = found || checkLine(tmp);	
  			count++;
     		}
     		if (found) 
		{
  			print();
     		} 
		else 
		{
  			System.out.println("No solution.");
     		}
    		 if (cases > 0)
			  System.out.println();
 	}
    }


    public void print() 
    {
	for (int i = 0; i < count; i++)
	 {
     		int len = matrix[i].length();
     		for (int j = 0; j < len; j++)	
		{
 			 if (matrix[i].charAt(j) == ' ')
      				System.out.print(' ');
  			else
      				System.out.print((char) map[matrix[i].charAt(j) - 'a']);
     		}
    		 System.out.println();
 	 }
    }

   public boolean checkLine(String aLine) 
    {
	 int len = aLine.length();
 	if (plain.length() != len)
     		return false;
 	map = new int[26];
 	for (int i = 0; i < len; i++) 
	{
     		int index1 = aLine.charAt(i) - 'a';
    		if (aLine.charAt(i) == ' ')
		{
  			if (plain.charAt(i) != ' ')
      				return false;
     		} 
		else
		{
 			 if (map[index1] == 0)
     				 map[index1] = plain.charAt(i);
			 else 
				if (map[index1] != plain.charAt(i))
     					 return false;
     		}
	}
	 return true;
   }
}