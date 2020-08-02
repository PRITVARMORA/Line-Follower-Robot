int i,j,k,l,z,a,b,c,d,p,q,r,s,e,f,g,h;
 void setup() {
pinMode (INPUT,A1);
pinMode (INPUT,A2);
pinMode (INPUT,A3);
pinMode (INPUT,A4);
pinMode (OUTPUT,5);
pinMode (OUTPUT,6);
pinMode (OUTPUT,2);

delay(1000);

digitalWrite(2,HIGH);
i=analogRead(A1);
j=analogRead(A2);
k=analogRead(A3);
l=analogRead(A4);
delay (1000);

digitalWrite (2,LOW);
delay(1000);

digitalWrite(2,HIGH);
delay (5000);

e=analogRead(A1);
f=analogRead(A2);
g=analogRead(A3);
h=analogRead(A4);

delay (1000);
digitalWrite(2,LOW);
delay (500);

digitalWrite(2,HIGH);
delay (5000);
digitalWrite(2,LOW);

p=((i+e)/2);
q=((j+f)/2);
r=((k+g)/2);
s=((l+h)/2);
 
}

void loop() {


  
  
i=analogRead(A1);
j=analogRead(A2);
k=analogRead(A3);
l=analogRead(A4);

  if (i>=p)
    a=1;
  else
    a=0;
  if (j>=q)   
    b=1;
  else
    b=0;
  if (k>=r)
    c=1;  
  else
    c=0;
  if (l>=s)
    d=1;
  else
    d=0;

    
    if (a==0 && b==1 && d==0 && c==1)
      { 
        digitalWrite (5,HIGH);
        digitalWrite (6,HIGH);
     }

      
    else if (a==0&&c==1&&b==0&&d==0)
      {
        digitalWrite (5,HIGH);
        digitalWrite (6,LOW);
      }

      
    else if (a==0&&b==1&&c==0&&d==0)
      {
        digitalWrite (6,HIGH);
        digitalWrite (5,LOW);
      }

      
    else if (a==0&&b==1&&c==1&&d==1)
      {
        digitalWrite (5,HIGH);
        digitalWrite (6,LOW);
              for (z=1;z>0;z++)
                {
                    i=analogRead(A1);
                      j=analogRead(A2);
                      k=analogRead(A3);
                      l=analogRead(A4);
                          if (i>=p)
                            a=1;
                          else
                            a=0;
                          if (j>=q)
                            b=1;
                          else
                            b=0;
                          if (k>=r)
                            c=1;
                          else
                            c=0;
                          if (l>=s)
                            d=1;
                          else
                            d=0;
                    if (a==0&&d==0 &&  c==1&& b==1)
                            break;
                else if (a==1)
                {
                  digitalWrite (  6,HIGH);
        digitalWrite (5,LOW);
              for (z=1;z>0;z++)
                {
                  i=analogRead(A1);
                  j=analogRead(A2);
                  k=analogRead(A3);
                  l=analogRead(A4);
                      if (i>=p)
                        a=1;
                      else
                        a=0;
                      if (j>=q)
                        b=1;
                      else
                        b=0;  
                      if (k>=r)
                        c=1;
                      else
                        c=0;
                      if (l>=s) 
                        d=1;
                      else
                        d=0;
          if (a==0 && b==1&& d==0&&c==1)
                    break;
                }
                }
                }
                
    }

    
    else if (a==1&&d==0&&b==1&&c==1)
      {
        digitalWrite (  6,HIGH);
        digitalWrite (5,LOW);
              for (z=1;z>0;z++)
                {
                  i=analogRead(A1);
                  j=analogRead(A2);
                  k=analogRead(A3);
                  l=analogRead(A4);
                      if (i>=p)
                        a=1;
                      else
                        a=0;
                      if (j>=q)
                        b=1;
                      else
                        b=0;  
                      if (k>=r)
                        c=1;
                      else
                        c=0;
                      if (l>=s) 
                        d=1;
                      else
                        d=0;
          if (a==0 && b==1&& d==0&&c==1)
                    break;
                }
        }

        
    else if (a==0&&b==0&&c==0&&d==0)
    { 
        digitalWrite (5,LOW);
        digitalWrite (6,LOW);

    }




/* else if (a==0&&c==1&&b==0&&d==1)
      {
        digitalWrite (5,HIGH);
        digitalWrite (6,LOW);
      }

      
    else if (a==1&&b==1&&c==0&&d==0)
      {
        digitalWrite (6,HIGH);
        digitalWrite (5,LOW);
      }
      else if (a==1&&c==0&&b==1&&d==0)
      {
        digitalWrite (5,HIGH);
        digitalWrite (6,LOW);
      }

      
    else if (a==0&&b==0&&c==1&&d==1)
      {
        digitalWrite (6,HIGH);
        digitalWrite (5,LOW);
      }
      */




    
    else if (a==1&&b==0&&d==1&&c==0)
      { 
        digitalWrite (5,HIGH);
        digitalWrite (6,HIGH);
     }

      
    else if (a==1&&c==0&&d==1&&b==1)
      {
        digitalWrite (5,HIGH);
        digitalWrite (6,LOW);
      }

      
    else if (a==1&&b==0&&c==1&&d==1)
      {
        digitalWrite (6,HIGH);
        digitalWrite (5,LOW);
      }

      
    else if (a==1&&b==0&&c==0&&d==0)
      {
        digitalWrite (5,HIGH);
        digitalWrite (6,LOW);
              for (z=1;z>0;z++)
                {
                    i=analogRead(A1);
                      j=analogRead(A2);
                      k=analogRead(A3);
                      l=analogRead(A4);
                          if (i>=p)
                            a=1;
                          else
                            a=0;
                          if (j>=q)
                            b=1;
                          else
                            b=0;
                          if (k>=r)
                            c=1;
                          else
                            c=0;
                          if (l>=s)
                            d=1;
                          else
                            d=0;
                    if (a==1&&d==1&&c==0&&b==0)
                            break;
                }
    }

    
    else if (a==0&&d==1&&b==0&&c==0)
      {
        digitalWrite (  6,HIGH);
        digitalWrite (5,LOW);
              for (z=1;z>0;z++)
                {
                  i=analogRead(A1);
                  j=analogRead(A2);
                  k=analogRead(A3);
                  l=analogRead(A4);
                      if (i>=p)
                        a=1;
                      else
                        a=0;
                      if (j>=q)
                        b=1;
                      else
                        b=0;  
                      if (k>=r)
                        c=1;
                      else
                        c=0;
                      if (l>=s) 
                        d=1;
                      else
                        d=0;
          if (a==1&&b==0&&d==1&&c==0)
                    break;
                }
        }

        
    else if (a==1&&b==1&&c==1&&d==1)
    { 
        digitalWrite (5,HIGH);
        digitalWrite (6,HIGH);
    } 
   
        delay(10);
        
} 
