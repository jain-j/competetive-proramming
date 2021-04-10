import java.io.*;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.*;

class PiecesOfLand {

	public static void main(String args[])
	{
		BigDecimal a = new BigDecimal("0");
		BigDecimal b = new BigDecimal("0");
		BigDecimal c = new BigDecimal("0");
		 Scanner s = new Scanner(System.in);
		 long n;
		 n = s.nextInt();

		 for (int i=0; i<n; i++)
		 {
			 a = s.nextBigDecimal();
			 b = a.multiply( a.subtract(BigDecimal.valueOf(1)));
			 b = b.multiply(a.subtract(BigDecimal.valueOf(2)));
			 b =  b.multiply(a.subtract(BigDecimal.valueOf(3)));
			 b = b.divide(BigDecimal.valueOf(24));
			 c = a.multiply(a.subtract(BigDecimal.valueOf(1)));
			 c = c.divide(BigDecimal.valueOf(2));
			 b = b.add(c);
			 b = b.add(BigDecimal.valueOf(1));

			 System.out.printf("%s\n", b.toString());
		 }
	}

}