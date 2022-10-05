object BookManagerFrm: TBookManagerFrm
  Left = 0
  Top = 0
  Caption = 'Book Management'
  ClientHeight = 455
  ClientWidth = 723
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ClientPanel: TPanel
    Left = 0
    Top = 0
    Width = 723
    Height = 455
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ShowCaption = False
    TabOrder = 0
    ExplicitLeft = 1
    object BookTitleLbl: TLabel
      Left = 267
      Top = 50
      Width = 24
      Height = 13
      Caption = 'Title:'
    end
    object ISBNLbl: TLabel
      Left = 267
      Top = 84
      Width = 27
      Height = 13
      Caption = 'ISBN:'
    end
    object BookTagsLbl: TLabel
      Left = 170
      Top = 194
      Width = 27
      Height = 13
      Caption = 'Tags:'
    end
    object AddBookBtn: TBitBtn
      Left = 8
      Top = 9
      Width = 75
      Height = 25
      Caption = #10133' Add'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clGreen
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnClick = AddBookBtnClick
    end
    object SearchBookBtn: TBitBtn
      Left = 8
      Top = 40
      Width = 75
      Height = 25
      Caption = #55357#56590' Search'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHotLight
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
    end
    object ModifyBookBtn: TBitBtn
      Left = 8
      Top = 71
      Width = 75
      Height = 25
      Caption = #9881#65039' Modify'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clOlive
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
    end
    object DeleteBookBtn: TBitBtn
      Left = 8
      Top = 102
      Width = 75
      Height = 25
      Caption = #10060' Delete'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
    end
    object BookNameEdit: TEdit
      Left = 314
      Top = 44
      Width = 121
      Height = 21
      TabOrder = 4
    end
    object ISBNMaskEdit: TMaskEdit
      Left = 314
      Top = 80
      Width = 121
      Height = 21
      EditMask = '000\-0\-00000\-000\-0;1;_'
      MaxLength = 17
      TabOrder = 5
      Text = '   - -     -   - '
    end
    object BookTagsMemo: TMemo
      Left = 210
      Top = 191
      Width = 337
      Height = 89
      TabOrder = 6
    end
  end
end
