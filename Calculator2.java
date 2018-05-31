import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

class A extends Frame implements ActionListener
{
	Button b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20;
	TextField t1;
	public void make()
	{
		setSize(500,500);
		setLayout(null);
		t1 = new TextField(" ");
		t1.setBounds(100,80,300,40);
		add(t1);
		t1.addActionListener(this);
		b0 = new Button("0");
		b0.setBounds(140,360,50,50);
		add(b0);
		b0.addActionListener(this);
		b1 = new Button("1");
		b1.setBounds(80,150,50,50);
		add(b1);
		b1.addActionListener(this);
		b2 = new Button("2");
		b2.setBounds(140,150,50,50);
		add(b2);
		b2.addActionListener(this);
		b3 = new Button("3");
		b3.setBounds(200,150,50,50);
		add(b3);
		b3.addActionListener(this);
		b4 = new Button("4");
		b4.setBounds(80,220,50,50);
		add(b4);
		b4.addActionListener(this);
		b5 = new Button("5");
		b5.setBounds(140,220,50,50);
		add(b5);
		b5.addActionListener(this);
		b6 = new Button("6");
		b6.setBounds(200,220,50,50);
		add(b6);
		b6.addActionListener(this);
		b7 = new Button("7");
		b7.setBounds(80,290,50,50);
		add(b7);
		b7.addActionListener(this);
		b8 = new Button("8");
		b8.setBounds(140,290,50,50);
		add(b8);
		b8.addActionListener(this);
		b9 = new Button("9");
		b9.setBounds(200,290,50,50);
		add(b9);
		b9.addActionListener(this);
		b10 = new Button("DEL");
		b10.setBounds(270,150,50,50);
		add(b10);
		b10.addActionListener(this);
		b11 = new Button("AC");
		b11.setBounds(330,150,50,50);
		add(b11);
		b11.addActionListener(this);
		b12 = new Button("X");
		b12.setBounds(270,220,50,50);
		add(b12);
		b12.addActionListener(this);
		b13 = new Button("/");
		b13.setBounds(330,220,50,50);
		add(b13);
		b13.addActionListener(this);
		b14 = new Button("+");
		b14.setBounds(270,290,50,50);
		add(b14);
		b14.addActionListener(this);
		b15 = new Button("-");
		b15.setBounds(330,290,50,50);
		add(b15);
		b15.addActionListener(this);
		b16 = new Button("^");
		b16.setBounds(270,360,50,50);
		add(b16);
		b16.addActionListener(this);
		b17 = new Button("%");
		b17.setBounds(330,360,50,50);
		add(b17);
		b17.addActionListener(this);
		b18 = new Button("(");
		b18.setBounds(390,290,50,50);
		add(b18);
		b18.addActionListener(this);
		b19 = new Button(")");
		b19.setBounds(390,360,50,50);
		add(b19);
		b19.addActionListener(this);
		b20 = new Button("DONE");
		b20.setBounds(390,150,50,120);
		add(b20);
		b20.addActionListener(this);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource() == b0)
		{
			String temp = t1.getText();
			temp = temp + "0";
			t1.setText(temp);
		}
		else if(e.getSource() == b1)
		{
			String temp = t1.getText();
			temp = temp + "1";
			t1.setText(temp);
		}
		else if(e.getSource() == b2)
		{
			String temp = t1.getText();
			temp = temp + "2";
			t1.setText(temp);
		}
		else if(e.getSource() == b3)
		{
			String temp = t1.getText();
			temp = temp + "3";
			t1.setText(temp);
		}
		else if(e.getSource() == b4)
		{
			String temp = t1.getText();
			temp = temp + "4";
			t1.setText(temp);
		}
		else if(e.getSource() == b5)
		{
			String temp = t1.getText();
			temp = temp + "5";
			t1.setText(temp);
		}
		else if(e.getSource() == b6)
		{
			String temp = t1.getText();
			temp = temp + "6";
			t1.setText(temp);
		}
		else if(e.getSource() == b7)
		{
			String temp = t1.getText();
			temp = temp + "7";
			t1.setText(temp);
		}
		else if(e.getSource() == b8)
		{
			String temp = t1.getText();
			temp = temp + "8";
			t1.setText(temp);
		}
		else if(e.getSource() == b9)
		{
			String temp = t1.getText();
			temp = temp + "9";
			t1.setText(temp);
		}
		else if(e.getSource() == b10)
		{
			String temp = t1.getText();
			try
			{
				if(temp.charAt(temp.length() - 1) == ' ')
				{
					temp = temp.substring(0,temp.length() - 2);
				}
				else
				{ 
					temp = temp.substring(0,temp.length() - 1);
				}
			}
			catch(Exception e1)
			{
				System.out.println("nothing to remove");
			}
			t1.setText(temp);
		}
		else if(e.getSource() == b11)
		{
			String temp = "";
			t1.setText(temp);
		}
		else if(e.getSource() == b12)
		{
			String temp = t1.getText();
			temp = temp + "*";
			t1.setText(temp);
		}
		else if(e.getSource() == b13)
		{
			String temp = t1.getText();
			temp = temp + "/";
			t1.setText(temp);
		}
		else if(e.getSource() == b14)
		{
			String temp = t1.getText();
			temp = temp + "+";
			t1.setText(temp);
		}
		else if(e.getSource() == b15)
		{
			String temp = t1.getText();
			temp = temp + "-";
			t1.setText(temp);
		}
		else if(e.getSource() == b16)
		{
			String temp = t1.getText();
			temp = temp + "^";
			t1.setText(temp);
		}
		else if(e.getSource() == b17)
		{
			String temp = t1.getText();
			temp = temp + "%";
			t1.setText(temp);
		}
		else if(e.getSource() == b18)
		{
			String temp = t1.getText();
			temp = temp + "(";
			t1.setText(temp);
		}
		else if(e.getSource() == b19)
		{
			String temp = t1.getText();
			temp = temp + ")";
			t1.setText(temp);
		}

		else if(e.getSource() == b20)
		{
			String temp = t1.getText();
			B o1 = new B();
			int answer = o1.convert(temp);
			String str = String.valueOf(answer);
			t1.setText(str);
		}
	}
}

class B
{
	public int convert(String str)
	{
		int n = str.length();
		char[] a = new char[n];
		char[] b = new char[n];
		char[] c = new char[2*n];
		int i,j = 0,k = 0;
		for(i=0;i<n;i++)
		{
			a[i] = str.charAt(i);
		}
		for(i=0;i<n;i++)
		{
			if(a[i] == '*')
			{
				int flag = 0;
				while((flag == 0) && j != 0)
				{
					if((b[j-1] == '/') || (b[j-1] == '%') || (b[j-1] == '^'))
					{
						c[k] = ' ';
						k++;
						c[k] = b[j-1];
						k++;
						b[j-1] = a[i]; 
					}
					else 
					{
						if((b[j-1] != '(') && (b[j-1] != ')'))
							j--;
						flag = 1;
					}
				}
				b[j] = '*';
				j++;
				c[k] = ' ';
				k++;
			}
			else if(a[i] == '/')
			{
				int flag = 0;
				while((flag == 0) && j != 0)
				{
					if((b[j-1] == '*') || (b[j-1] == '%') || (b[j-1] == '^'))
					{
						c[k] = ' ';
						k++;
						c[k] = b[j-1];
						k++;
						b[j-1] = a[i]; 
					}
					else 
					{
						if((b[j-1] != '(') && (b[j-1] != ')'))
							j--;
						flag = 1;
					}
				}
				b[j] = '/';
				j++;
				c[k] = ' ';
				k++;
			}
			else if(a[i] == '+')
			{
				int flag = 0;
				while((flag == 0) && (j != 0))
				{
					if((b[j-1] == '*') || (b[j-1] == '/') || (b[j-1] == '%') || (b[j-1] == '-') || (b[j-1] == '^'))
					{
						c[k] = ' ';
						k++;
						c[k] = b[j-1];
						k++;
						b[j-1] = a[i]; 
					}
					else 
					{
						if((b[j-1] != '(') && (b[j-1] != ')'))
							j--;
						flag = 1;
					}
				}
				b[j] = '+';
				j++;
				c[k] = ' ';
				k++;
			}
			else if(a[i] == '-')
			{
				int flag = 0;
				while((flag == 0) && (j != 0))
				{
					if((b[j-1] == '*') || (b[j-1] == '/') || (b[j-1] == '%') || (b[j-1] == '+') || (b[j-1] == '^'))
					{
						c[k] = ' ';
						k++;
						c[k] = b[j-1];
						k++;
						b[j-1] = a[i]; 
					}
					else 
					{
						if((b[j-1] != '(') && (b[j-1] != ')'))
							j--;
						flag = 1;
					}
				}
				b[j] = '-';
				j++;
				c[k] = ' ';
				k++;
			}
			else if(a[i] == '^')
			{
				b[j] = '^';
				j++;
				c[k] = ' ';
				k++;
			}
			else if(a[i] == '%')
			{
				int flag = 0;
				while((flag == 0) && (j != 0))
				{
					if((b[j-1] == '*') || (b[j-1] == '/') || (b[j-1] == '^'))
					{
						c[k] = ' ';
						k++;
						c[k] = b[j-1];
						k++;
						b[j-1] = a[i]; 
					}
					else 
					{
						if((b[j-1] != '(') && (b[j-1] != ')'))
							j--;
						flag = 1;
					}
				}
				b[j] = '%';
				j++;
				c[k] = ' ';
				k++;
			}
			else if(a[i] == '(')
			{
				b[j] = '(';
				j++;
			}
			else if(a[i] == ')')
			{
				int temp = j-1;
				while(b[temp] != '(')
				{
					c[k] = ' ';
					k++;
					c[k] = b[temp];
					k++;
					temp--;
				}
				j = temp;
			}
			else 
			{
				c[k] = a[i];
				k++;
			}
		}
		j--;
		while(j >= 0)
		{
			c[k] = ' ';
			k++;
			c[k] = b[j];
			k++;
			j--;
		}
		c[k] = 'a';
		k++;
		for(i=0;i<k;i++)
		{
			System.out.print(c[i]);
		}
		B o1 = new B();
		int answer = o1.calculate(c);
		return answer;
	}

	public int calculate(char a[])
	{
		int n = a.length;
		int i,j,k = 0;
		String[] str = new String[n];
		for(i=0;i<n;i++)
		{
			if(a[i] == ' ')
			{
				continue;
			}
			else if(a[i] == '*') 
			{
				int temp1 = Integer.parseInt(str[k-1]);
				int temp2 = Integer.parseInt(str[k-2]);
				k = k - 2;
				int temp3 = temp1 * temp2;
				String str1 = String.valueOf(temp3);
				str[k] = str1;
				k++;
			}
			else if(a[i] == '+') 
			{
				int temp1 = Integer.parseInt(str[k-1]);
				int temp2 = Integer.parseInt(str[k-2]);
				k = k - 2;
				int temp3 = temp1 + temp2;
				String str1 = String.valueOf(temp3);
				str[k] = str1;
				k++;
			}
			else if(a[i] == '/') 
			{
				int temp1 = Integer.parseInt(str[k-1]);
				int temp2 = Integer.parseInt(str[k-2]);
				k = k - 2;
				int temp3 = temp2 / temp1;
				String str1 = String.valueOf(temp3);
				str[k] = str1;
				k++;
			}
			else if(a[i] == '-') 
			{
				int temp1 = Integer.parseInt(str[k-1]);
				int temp2 = Integer.parseInt(str[k-2]);
				k = k - 2;
				int temp3 = temp2 - temp1;
				String str1 = String.valueOf(temp3);
				str[k] = str1;
				k++;
			}
			else if(a[i] == '^') 
			{
				int temp1 = Integer.parseInt(str[k-1]);
				int temp2 = Integer.parseInt(str[k-2]);
				k = k - 2;
				long temp3 = Math.round(Math.pow(temp2,temp1));
				String str1 = String.valueOf(temp3);
				str[k] = str1;
				k++;
			}
			else if(a[i] == '%') 
			{
				int temp1 = Integer.parseInt(str[k-1]);
				int temp2 = Integer.parseInt(str[k-2]);
				k = k - 2;
				int temp3 = temp2 % temp1;
				String str1 = String.valueOf(temp3);
				str[k] = str1;
				k++;
			}
			else if(a[i] == 'a')
				break;
			else
			{
				String str1 = Character.toString(a[i]);
				i++;
				while(a[i] != ' ')
				{
					str1 = str1 + a[i];
					i++;
				}
				str[k] = str1;
				k++;
			}
		}
		int answer = Integer.parseInt(str[k-1]);
		return answer;
	}
}

class C
{
	public static void main(String[] args) 
	{
		A o1 = new A();
		o1.make();	
	}
}