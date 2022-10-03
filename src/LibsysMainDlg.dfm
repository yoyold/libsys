object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'Libsys'
  ClientHeight = 624
  ClientWidth = 928
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 928
    Height = 624
    Align = alClient
    ShowCaption = False
    TabOrder = 0
  end
  object MainMenu: TMainMenu
    Left = 48
    Top = 16
    object BookItem: TMenuItem
      Caption = 'Books'
    end
    object stem: TMenuItem
      Caption = 'Customers'
      object CustomerInfoItem: TMenuItem
        Caption = 'Information'
      end
      object MembershipItem: TMenuItem
        Caption = 'Memberships'
      end
    end
    object AdminItem: TMenuItem
      Caption = 'Admin'
      object UsersItem: TMenuItem
        Caption = 'Users'
      end
      object AccessItem: TMenuItem
        Caption = 'Access Management'
      end
      object Statistics: TMenuItem
        Caption = 'Statistics'
      end
      object LogsItem: TMenuItem
        Caption = 'Logs'
      end
    end
    object AboutItem: TMenuItem
      Caption = 'About'
    end
  end
end
