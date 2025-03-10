Unit UJuego;

interface
uses sysutils,windows,graphics,dialogs;
const
	pared =1;
	camino=0;

type
  Cjuego = class
  private
    M : array[1..50,1..50] of integer;
    Nf,Nc,bx,by : integer;
    pantX,pantY : integer;
    dimpieza : integer;
    Bicho : integer;
    Puntos : integer;
    nivel : integer;
    poder : integer;
  public
    constructor crear;
    procedure cargar(nivel:string);
    procedure dibujarpieza(f,c : integer; Pant :  Tcanvas);
    procedure DibujarPlano(Pant : Tcanvas);
    procedure MoverDerecha(Pant : Tcanvas);
    procedure MoverIzquierda(Pant : Tcanvas);
    procedure MoverArriba(Pant : Tcanvas);
    procedure MoverAbajo(Pant : Tcanvas);
    function escamino(f,c : integer) : boolean;
    function PuntosJuego : integer;
    function ExisteNivel(s : string) : boolean;
    procedure jugar(tecla:word;pant:Tcanvas);
    function checkarX(xpos,ypos : integer; dir : string):integer;
  end;

implementation
  constructor Cjuego.crear;
  begin
    Nf:=0;
    Nc:=0;
    Puntos:=0;
    nivel:=1;
    poder:=0;
  end;

  procedure Cjuego.cargar(nivel:string);
    procedure llenar(f:integer; s:string);
    var
    c : integer;
    begin
      for c := 1 to length(s) do
       M[f,c]:=strtoint(s[c]);
    end;
  var
    f : textfile;
    L,tmp : string;
    c,tam : integer;
    leer : boolean;
  begin
    assignfile(f,'C:\Images DELPHI\MAPAS.txt');
    reset(f);
    c:=1;
    tam:=0;
    L := 'mono';
    tmp := 'N' + nivel;
    leer :=true;
    while L<>tmp do
    begin
      readln(f,L)
    end;

    if L=tmp then
    begin
    while ((not eof(f))) do
    begin
      readln(f,L);

      if(L='@') then leer :=false;

      if leer=true then
      begin
        if length(L)>tam then tam:=length(L);
        if pos('2',L)>0 then
        begin
        bx:=pos('2',L);
        by:=c;
        end;
        if length(L)>0 then
        begin
        llenar(c,L);
        inc(c);
        end;
      end;
    end;
    end;
    Nf:=c-1;
    Nc:=tam;
    closefile(f);
    {
    Nf:=8;
    Nc:=15;
    llenar(1,'111111111111111');
    llenar(2,'120000000000001');
    llenar(3,'101010101010101');
    llenar(4,'101010101515101');
    llenar(5,'100000001111101');
    llenar(6,'100000000000001');
    llenar(7,'100501111000001');
    llenar(8,'111111331111111');
    }

  end;


  /// Posx = Cx + (c-1)*tamano
  /// Posy = Cy + (f-1)*tamano
  ///  tamano = tamano de la figura
  ///  Cx y Cy posiciones iniciales
  procedure Cjuego.dibujarpieza(f,c:integer; pant : Tcanvas);
  var
    xr,yr : integer;
    cod : integer;
    figura : tbitmap;
    archbmp : string;
  begin

    PANTX:=160;
    PANTY:=50;
    dimpieza:=32;
    xr:= pantx + (c-1)*dimpieza;
    yr:= panty + (f-1)*dimpieza;
    cod:=M[f,c];

    if cod<>9 then
    begin
    figura:= Tbitmap.Create;
    case cod of
    5 : archbmp:='C:\Images DELPHI\MONEDA.bmp';
    2 : archbmp:='C:\Images DELPHI\PERSONAJE.bmp';
    1 : archbmp:='C:\Images DELPHI\MURO.bmp';
    0 : archbmp:='C:\Images DELPHI\PISO.bmp';
    end;
    figura.LoadFromFile(archbmp);
    pant.Draw(xr,yr,figura);
    end;
    ///pant.TextOut(xr,yr,inttostr(cod));

  end;

  procedure Cjuego.DibujarPlano(Pant :  Tcanvas);
  var
   fi,co:integer;
  begin
    for FI := 1 to Nf do
      begin
        for Co := 1 to Nc do
          begin
            dibujarpieza(fi,co,pant);
          end;
      end;


  end;

  procedure Cjuego.MoverDerecha(Pant: TCanvas);
  var
     xtmp : integer;
  begin
    if M[by,bx+1]=1 then
    begin
      inc(poder);
    end;

    if Poder=3 then
    begin
       M[by,bx+1]:=0;
       Poder:=0;
    end;

    if (( (M[by,bx+1]=9) or (bx+1=nC)) and (checkarX(bx,by,'IZQ')<>-1)) then
    begin
       bx:=checkarX(bx,by,'IZQ');
       xtmp:=checkarX(bx,by,'DER');
       M[by,xtmp]:=0;
    end;


    if escamino(by,bx+1) then
    begin
    M[by,bx]:=camino;
    dibujarPieza(by,bx,pant);
    inc(bx);
    m[by,bx]:=2; //Bicho = 2
    dibujarPieza(by,bx,pant);
    end
    else
    if M[by,bx+1]=5 then
    begin
    inc(Puntos);
    M[by,bx]:=camino;
    dibujarPieza(by,bx,pant);
    inc(bx);
    m[by,bx]:=2; //Bicho = 2
    dibujarPieza(by,bx,pant);
    end;

  end;

  procedure Cjuego.MoverIzquierda(Pant: TCanvas);
  var
     xprev : integer;
  begin

    if M[by,bx-1]=1 then
    begin
      inc(poder);
    end;

    if Poder=3 then
    begin
       M[by,bx-1]:=0;
      Poder:=0;
    end;

    xprev:=bx;
    if (( (M[by,bx-1]=9) or (bx-1=0)) and (checkarX(bx,by,'DER')<>-1)) then
    begin
      bx:=checkarX(bx,by,'DER');
    end;

    if escamino(by,bx-1) then
    begin
    M[by,bx]:=camino;
    dibujarPieza(by,bx,pant);
    bx:=bx-1;
    m[by,bx]:=2; //Bicho = 2
    dibujarPieza(by,bx,pant);
    end
    else
    if M[by,bx-1]=5 then
    begin
    inc(Puntos);
    M[by,bx]:=camino;
    dibujarPieza(by,bx,pant);
    bx:=bx-1;
    m[by,bx]:=2; //Bicho = 2
    dibujarPieza(by,bx,pant);
    end;
  end;

  procedure Cjuego.MoverArriba(Pant: TCanvas);
  begin

    if M[by-1,bx]=1 then
    begin
      inc(poder);
    end;

    if Poder=3 then
    begin
       M[by-1,bx]:=0;
       Poder:=0;
    end;

    if M[by-1,bx]=5 then
    begin
    inc(Puntos);
    M[by,bx]:=camino;
    dibujarPieza(by,bx,pant);
    by:=by-1;
    m[by,bx]:=2; //Bicho = 2
    dibujarPieza(by,bx,pant);
    end
    else
    if escamino(by-1,bx) then
    begin
    M[by,bx]:=camino;
    dibujarPieza(by,bx,pant);
    by:=by-1;
    m[by,bx]:=2; //Bicho = 2
    dibujarPieza(by,bx,pant);
    end;


  end;

    procedure Cjuego.MoverAbajo(Pant: TCanvas);
  begin

    if M[by+1,bx]=1 then
    begin
      inc(poder);
    end;

    if Poder=3 then
    begin
       M[by+1,bx]:=0;
       Poder:=0;
    end;

    if escamino(by+1,bx) then
    begin
    M[by,bx]:=camino;
    dibujarPieza(by,bx,pant);
    by:=by+1;
    m[by,bx]:=2; //Bicho = 2
    dibujarPieza(by,bx,pant);
    end
    else
    if M[by+1,bx]=5 then
    begin
    inc(Puntos);
    M[by,bx]:=camino;
    dibujarPieza(by,bx,pant);
    inc(by);
    m[by,bx]:=2; //Bicho = 2
    dibujarPieza(by,bx,pant);
    end;
  end;

  function Cjuego.escamino(f,c : integer): boolean;
  begin
    escamino:=m[f,c] =0;
  end;

  function Cjuego.PuntosJuego : integer;
  begin
     result:=puntos;
  end;

  function Cjuego.ExisteNivel(s:string) : boolean;
  var
     f : textfile;
     L,tmp : string;
     e : boolean;
  begin
    assignfile(f,'C:\Images DELPHI\MAPAS.txt');
    reset(f);
    e := false;
    tmp:='N'+s;
    while not(eof(f)) do
    begin
       readln(f,L);
        if L=tmp then  e:=true;

    end;

    closefile(f);

    result:=e;
  end;

  procedure Cjuego.jugar(tecla: Word; pant:Tcanvas);
  var
     ex : boolean;
  begin

      ex:=ExisteNivel(inttostr(nivel+1));

      if puntos<3  then
      begin
      if tecla=VK_right then MoverDerecha(pant) else
      if tecla=VK_left then MoverIzquierda(pant) else
      if tecla=VK_up then MoverArriba(pant) else
      if tecla=VK_down then MoverAbajo(pant);
      end;


      if ((puntos>=3) and (ex=true)) then
      begin
        puntos:=0;
        inc(nivel);
        cargar(inttostr(nivel));
        DibujarPlano(pant);
      end else
      if ((puntos>=3) and (ex=false)) then showmessage('Felicidades haz Ganado!');


  end;

  function Cjuego.checkarX(xpos , ypos: Integer; dir : string)  : integer;
  var
    xi,yi : integer;
    i,ans : integer;
    found : boolean;
  begin
    i:=xpos;

    found:=false;

    xi:=xpos;
    yi:=ypos;

    if dir='DER' then
    begin
       while (i<=Nc) and (found=false)  do
       begin

         if((M[by,i]=0) and (M[by,i+1]=9)) then
         begin
           found:=true;
           ans:=i;
         end;
         inc(i);
       end;
    end;


    if(dir='IZQ') then
    begin
       while (i>=1) and (found=false)  do
       begin

         if((M[by,i]=0) and ((M[by,i-1]=9) or (i=1))) then
         begin
           found:=true;
           ans:=i;
         end;
         i:=i-1;
       end;
    end;

    if found=true then
    begin
    Result:=ans;
    M[yi,xi]:=0;
    end else
    Result:=-1;

  end;



end.
