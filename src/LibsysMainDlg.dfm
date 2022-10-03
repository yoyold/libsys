object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'Libsys'
  ClientHeight = 73
  ClientWidth = 392
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
  object ClientPanel: TPanel
    Left = 0
    Top = 0
    Width = 392
    Height = 73
    Align = alClient
    ShowCaption = False
    TabOrder = 0
    ExplicitWidth = 700
    ExplicitHeight = 71
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
      object LicenseItem: TMenuItem
        Caption = 'License'
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
      object DevInfoItem: TMenuItem
        Caption = 'Development'
      end
      object ErrorStatusItem: TMenuItem
        Caption = 'Error Status'
      end
    end
  end
end
