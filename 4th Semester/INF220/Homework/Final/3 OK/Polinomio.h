//---------------------------------------------------------------------------

#ifndef PolinomioH
#define PolinomioH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <sstream>
#include "TDAPolinomioPuntero.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TPaintBox *PaintBox1;
    TEdit *Edit1;
    TEdit *Edit2;
    TEdit *Edit3;
    TButton *Button1;
    TLabel *Label1;
    TLabel *Label2;
    TButton *Button2;
    TButton *Button3;
    TButton *Coeficientes;
    TEdit *Coeficiente;
    TEdit *Exponente;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall PaintBox1Paint(TObject *Sender);
    void __fastcall CoeficientesClick(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
