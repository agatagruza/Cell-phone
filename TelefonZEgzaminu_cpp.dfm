object FTelefonZEgzaminu: TFTelefonZEgzaminu
  Left = 505
  Top = 91
  BorderStyle = bsDialog
  Caption = 'Telefon z  ezaminu'
  ClientHeight = 375
  ClientWidth = 203
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object PanelMenu: TPanel
    Left = 11
    Top = 120
    Width = 180
    Height = 85
    TabOrder = 0
    object ButtonSpisTelefonow: TButton
      Left = 10
      Top = 12
      Width = 77
      Height = 25
      Caption = 'Spis telefon'#243'w'
      TabOrder = 0
      OnClick = ButtonSpisTelefonowClick
    end
    object ButtonDodajWpis: TButton
      Left = 94
      Top = 12
      Width = 77
      Height = 25
      Caption = 'Dodaj wpis'
      TabOrder = 1
      OnClick = ButtonDodajWpisClick
    end
    object ButtonPolacz: TButton
      Left = 10
      Top = 48
      Width = 77
      Height = 25
      Caption = 'Po'#322#261'cz'
      TabOrder = 2
      OnClick = ButtonPolaczClick
    end
    object ButtonRozlacz: TButton
      Left = 94
      Top = 48
      Width = 77
      Height = 25
      Caption = 'Roz'#322#261'cz'
      TabOrder = 3
      OnClick = ButtonRozlaczClick
    end
  end
  object PanelWyswietlacz: TPanel
    Left = 11
    Top = 8
    Width = 180
    Height = 100
    Caption = 'Stan: bezczynny'
    Color = clBtnHighlight
    TabOrder = 1
    object ListBoxSpisTelefonow: TListBox
      Left = 0
      Top = -1
      Width = 180
      Height = 100
      ItemHeight = 13
      TabOrder = 0
      Visible = False
    end
    object PanelDodajWpis: TPanel
      Left = 0
      Top = 0
      Width = 180
      Height = 99
      TabOrder = 1
      Visible = False
      object LabelNazwisko: TLabel
        Left = 8
        Top = 12
        Width = 46
        Height = 13
        Caption = 'Nazwisko'
      end
      object LabelTelefon: TLabel
        Left = 8
        Top = 40
        Width = 36
        Height = 13
        Caption = 'Telefon'
      end
      object EditNazwisko: TEdit
        Left = 68
        Top = 8
        Width = 105
        Height = 21
        TabOrder = 0
      end
      object EditTelefon: TEdit
        Left = 68
        Top = 36
        Width = 105
        Height = 21
        ReadOnly = True
        TabOrder = 1
      end
      object ButtonBackspace: TButton
        Left = 7
        Top = 68
        Width = 75
        Height = 25
        Caption = 'Backspace'
        TabOrder = 2
        OnClick = ButtonBackspaceClick
      end
      object ButtonDodaj: TButton
        Left = 95
        Top = 68
        Width = 75
        Height = 25
        Caption = 'Dodaj'
        TabOrder = 3
        OnClick = ButtonDodajClick
      end
    end
  end
  object PanelKlawiatura: TPanel
    Left = 10
    Top = 216
    Width = 182
    Height = 150
    AutoSize = True
    TabOrder = 2
    object Button1: TButton
      Left = 1
      Top = 1
      Width = 60
      Height = 37
      Caption = '1'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 61
      Top = 1
      Width = 60
      Height = 37
      Caption = '2'
      TabOrder = 1
      OnClick = Button1Click
    end
    object Button3: TButton
      Left = 121
      Top = 1
      Width = 60
      Height = 37
      Caption = '3'
      TabOrder = 2
      OnClick = Button1Click
    end
    object Button4: TButton
      Left = 1
      Top = 38
      Width = 60
      Height = 37
      Caption = '4'
      TabOrder = 3
      OnClick = Button1Click
    end
    object Button5: TButton
      Left = 61
      Top = 38
      Width = 60
      Height = 37
      Caption = '5'
      TabOrder = 4
      OnClick = Button1Click
    end
    object Button6: TButton
      Left = 121
      Top = 38
      Width = 60
      Height = 37
      Caption = '6'
      TabOrder = 5
      OnClick = Button1Click
    end
    object Button7: TButton
      Left = 1
      Top = 75
      Width = 60
      Height = 37
      Caption = '7'
      TabOrder = 6
      OnClick = Button1Click
    end
    object Button8: TButton
      Left = 61
      Top = 75
      Width = 60
      Height = 37
      Caption = '8'
      TabOrder = 7
      OnClick = Button1Click
    end
    object Button9: TButton
      Left = 121
      Top = 75
      Width = 60
      Height = 37
      Caption = '9'
      TabOrder = 8
      OnClick = Button1Click
    end
    object ButtonG: TButton
      Left = 1
      Top = 112
      Width = 60
      Height = 37
      Caption = '*'
      TabOrder = 9
      OnClick = Button1Click
    end
    object Button0: TButton
      Left = 61
      Top = 112
      Width = 60
      Height = 37
      Caption = '0'
      TabOrder = 10
      OnClick = Button1Click
    end
    object ButtonK: TButton
      Left = 121
      Top = 112
      Width = 60
      Height = 37
      Caption = '#'
      TabOrder = 11
      OnClick = Button1Click
    end
  end
  object TimerZegar: TTimer
    Enabled = False
    OnTimer = TimerZegarTimer
    Left = 77
    Top = 255
  end
end
