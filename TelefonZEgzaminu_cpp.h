//---------------------------------------------------------------------------

#ifndef TelefonZEgzaminu_cppH
#define TelefonZEgzaminu_cppH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFTelefonZEgzaminu : public TForm
{
__published:	// IDE-managed Components
        TPanel *PanelMenu;
        TPanel *PanelWyswietlacz;
        TButton *ButtonSpisTelefonow;
        TButton *ButtonDodajWpis;
        TButton *ButtonPolacz;
        TButton *ButtonRozlacz;
        TListBox *ListBoxSpisTelefonow;
        TPanel *PanelDodajWpis;
        TTimer *TimerZegar;
        TEdit *EditNazwisko;
        TLabel *LabelNazwisko;
        TLabel *LabelTelefon;
        TEdit *EditTelefon;
        TButton *ButtonBackspace;
        TButton *ButtonDodaj;
        TPanel *PanelKlawiatura;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TButton *Button8;
        TButton *Button9;
        TButton *ButtonG;
        TButton *Button0;
        TButton *ButtonK;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ButtonDodajClick(TObject *Sender);
        void __fastcall ButtonSpisTelefonowClick(TObject *Sender);
        void __fastcall ButtonRozlaczClick(TObject *Sender);
        void __fastcall TimerZegarTimer(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall ButtonDodajWpisClick(TObject *Sender);
        void __fastcall ButtonBackspaceClick(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall ButtonPolaczClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFTelefonZEgzaminu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFTelefonZEgzaminu *FTelefonZEgzaminu;
//---------------------------------------------------------------------------
#endif
