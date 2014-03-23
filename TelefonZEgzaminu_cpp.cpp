//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TelefonZEgzaminu_cpp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFTelefonZEgzaminu *FTelefonZEgzaminu;
TButton *r;
TCaption c;
TStringList *sl;
//---------------------------------------------------------------------------
__fastcall TFTelefonZEgzaminu::TFTelefonZEgzaminu(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFTelefonZEgzaminu::FormCreate(TObject *Sender)
{
                sl=new TStringList;
                sl->Sorted=false;
                ListBoxSpisTelefonow->Sorted=false;
                if(FileExists("SpisTelefonow.txt"))
                {
                  sl->LoadFromFile("SpisTelefonow.txt");
                  for(int i=0;i<sl->Count;i++)
                  {
                     c=sl->Strings[i];
                     for(int j=1;j<=c.Length();j++)
                        if(c[j]==':')
                        {
                          sl->Strings[i]=sl->Strings[i].Delete(1,j);
                          ListBoxSpisTelefonow->Items->Append(c.Delete(j,c.Length()));
                          break;
                        }
                  }
                }
}
//---------------------------------------------------------------------------
void __fastcall TFTelefonZEgzaminu::ButtonDodajClick(TObject *Sender)
{
                PanelDodajWpis->Visible=false;
                if(EditNazwisko->Text.Length()>0&&EditTelefon->Text.Length()>0)
                {
                  ListBoxSpisTelefonow->Items->Append(EditNazwisko->Text);
                  sl->Append(EditTelefon->Text);
                }
                EditNazwisko->Clear();
                EditTelefon->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TFTelefonZEgzaminu::ButtonSpisTelefonowClick(
      TObject *Sender)
{
                PanelDodajWpis->Visible=false;
                ListBoxSpisTelefonow->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TFTelefonZEgzaminu::ButtonRozlaczClick(TObject *Sender)
{
                ListBoxSpisTelefonow->Visible=false;
                PanelDodajWpis->Visible=false;
                TimerZegar->Enabled=false;
                if(Tag>0)
                {
                  PanelWyswietlacz->Caption="Czas po³¹czenia: "+IntToStr(Tag)+" sekund";
                  PanelWyswietlacz->Refresh();
                  Tag=0;
                  Sleep(1000);
                }
                PanelWyswietlacz->Caption="Stan: bezczynny";
}
//---------------------------------------------------------------------------
void __fastcall TFTelefonZEgzaminu::TimerZegarTimer(TObject *Sender)
{
                Tag++;
}
//---------------------------------------------------------------------------
void __fastcall TFTelefonZEgzaminu::Button1Click(TObject *Sender)
{
                if(!TimerZegar->Enabled)
                {
                  r=dynamic_cast<TButton*>(Sender);
                  if(PanelDodajWpis->Visible)
                    EditTelefon->Text=EditTelefon->Text+r->Caption;
                  else
                  {
                    if(PanelWyswietlacz->Caption=="Stan: bezczynny")
                      PanelWyswietlacz->Caption="";
                    PanelWyswietlacz->Caption=PanelWyswietlacz->Caption+r->Caption;
                  }
                }
}
//---------------------------------------------------------------------------
void __fastcall TFTelefonZEgzaminu::ButtonDodajWpisClick(TObject *Sender)
{
                ListBoxSpisTelefonow->Visible=false;
                PanelDodajWpis->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TFTelefonZEgzaminu::ButtonBackspaceClick(TObject *Sender)
{
                if(EditTelefon->Text.Length()>0)
                  EditTelefon->Text=EditTelefon->Text.Delete(EditTelefon->Text.Length(),EditTelefon->Text.Length());
}
//---------------------------------------------------------------------------
void __fastcall TFTelefonZEgzaminu::ButtonPolaczClick(TObject *Sender)
{
                c=PanelWyswietlacz->Caption;
                if(TimerZegar->Enabled)
                  ;
                else
                {
                  if(PanelWyswietlacz->Visible)
                  {
                    if(c=="Stan: bezczynny")
                    {
                      PanelWyswietlacz->Caption="Wybierz numer!";
                      PanelWyswietlacz->Refresh();
                      Sleep(1000);
                      PanelWyswietlacz->Caption=c;
                    }
                    else
                    {
                      PanelWyswietlacz->Caption="Dzwonie do:"+c;
                      PanelWyswietlacz->Refresh();
                      TimerZegar->Enabled=true;
                    }
                  }
                  if(ListBoxSpisTelefonow->Visible)
                  {
                    ListBoxSpisTelefonow->Visible=false;
                    PanelWyswietlacz->Caption="Dzwonie do:"+sl->Strings[ListBoxSpisTelefonow->SelCount+1];
                    PanelWyswietlacz->Refresh();
                    TimerZegar->Enabled=true;
                  }
                }
}
//---------------------------------------------------------------------------
void __fastcall TFTelefonZEgzaminu::FormClose(TObject *Sender,
      TCloseAction &Action)
{
                TStringList *slrob=new TStringList;
                for(int i=0;i<ListBoxSpisTelefonow->Items->Count;i++)
                   slrob->Append(ListBoxSpisTelefonow->Items->Strings[i]+":"+sl->Strings[i]);
                slrob->SaveToFile("SpisTelefonow.txt");
                slrob->Free();
                sl->Free();
}
