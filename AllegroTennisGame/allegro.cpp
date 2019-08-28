#include<allegro.h>

using namespace std;
int main()
{
  allegro_init();
    
  install_keyboard();
  install_mouse();  
    
  set_color_depth(32);  
  set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);  
  set_window_title("Tennis");  
  
  
  double sprite_pos_x = 0;

BITMAP *buffer=create_bitmap(800,600);
BITMAP *sprite1;
BITMAP *court;
BITMAP *bs=load_bitmap("bacten.bmp", NULL);  
sprite1 = load_bitmap("tenniss.bmp", NULL);
court = load_bitmap("bacten.bmp", NULL);
    
    int x=200,y=200;
    int x1=200,y1=0;
    
    
    
  while(!key[KEY_ESC])  
  {
                          masked_blit(bs,buffer,0,0,0,0,800,600);
  
  circlefill(buffer,x1,y1,6,makecol(255,255,0));
  
  masked_blit(sprite1,buffer,0,0,x,y,800,600);

  
  blit(buffer,screen,0,0,0,0,800,600);
  y1=y1+3;
  
  if(y1>590)
 {y1=0;
 x1=rand()%700;}  
  if(key[KEY_RIGHT])
  {x=x+5;
                    
  }
  
  
  if(key[KEY_LEFT])
  {x=x-5;
                    
  }
  
  if(key[KEY_UP])
  {y=y-5;
                    
  }
  if(key[KEY_DOWN])
  {y=y+5;
                    
  }
  if(y>430)
  y=430;
  
  if(y<200)
  y=200;
  
  
  if(x<0)
  x=0;
  
  if(x>700)
  x=700;
  
  
  rest(5);
  
   clear_bitmap(buffer);
}

/*

if (!sprite1) {
set_gfx_mode(GFX_TEXT, 0, 0, 0, 0);
allegro_message("Error! Unable to load the image file!");

}     */           

readkey();    
   
}


END_OF_MAIN();
