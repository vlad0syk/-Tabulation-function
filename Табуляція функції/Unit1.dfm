object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1058#1072#1073#1091#1083#1103#1094#1110#1103' '#1092#1091#1085#1082#1094#1110#1111
  ClientHeight = 682
  ClientWidth = 1123
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  PopupMenu = PopupMenu1
  TextHeight = 15
  object Label1: TLabel
    Left = 199
    Top = 189
    Width = 123
    Height = 24
    Caption = #1055#1088#1072#1074#1072' '#1084#1077#1078#1072' '
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 199
    Top = 256
    Width = 106
    Height = 24
    Caption = #1051#1110#1074#1072' '#1084#1077#1078#1072' '
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 201
    Top = 323
    Width = 52
    Height = 24
    Caption = #1050#1088#1086#1082' '
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 8
    Width = 105
    Height = 24
    Caption = 'y=sin(x)+1 '
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 199
    Top = 219
    Width = 121
    Height = 31
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Text = '1'
    OnKeyPress = Edit1KeyPress
  end
  object Edit2: TEdit
    Left = 199
    Top = 286
    Width = 121
    Height = 31
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Text = '10'
    OnKeyPress = Edit2KeyPress
  end
  object Edit3: TEdit
    Left = 201
    Top = 353
    Width = 121
    Height = 31
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    Text = '0.1'
    OnKeyPress = Edit3KeyPress
  end
  object Memo1: TMemo
    Left = 10
    Top = 38
    Width = 185
    Height = 346
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssBoth
    TabOrder = 3
  end
  object GroupBox1: TGroupBox
    Left = 199
    Top = 38
    Width = 129
    Height = 145
    Caption = #1042#1080#1074#1077#1076#1077#1085#1085#1103
    DefaultHeaderFont = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = []
    HeaderFont.Charset = RUSSIAN_CHARSET
    HeaderFont.Color = clWindowText
    HeaderFont.Height = -20
    HeaderFont.Name = 'Arial'
    HeaderFont.Style = [fsBold, fsItalic]
    ParentFont = False
    PopupMenu = PopupMenu2
    TabOrder = 4
    object CheckBox1: TCheckBox
      Left = 3
      Top = 24
      Width = 142
      Height = 33
      Caption = #1053#1072' '#1077#1082#1088#1072#1085
      Checked = True
      State = cbChecked
      TabOrder = 0
    end
    object CheckBox2: TCheckBox
      Left = 2
      Top = 63
      Width = 142
      Height = 34
      Caption = #1059' '#1092#1072#1081#1083
      TabOrder = 1
    end
    object CheckBox3: TCheckBox
      Left = 3
      Top = 103
      Width = 142
      Height = 30
      Caption = #1059' '#1084#1072#1089#1080#1074
      Checked = True
      State = cbChecked
      TabOrder = 2
    end
  end
  object StringGrid1: TStringGrid
    Left = 8
    Top = 390
    Width = 187
    Height = 284
    ColCount = 3
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    Visible = False
  end
  object CheckBox4: TCheckBox
    Left = 201
    Top = 390
    Width = 97
    Height = 31
    Caption = #1055#1086#1093#1110#1076#1085#1072
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
  end
  object Edit4: TEdit
    Left = 201
    Top = 427
    Width = 520
    Height = 31
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    Visible = False
  end
  object Edit5: TEdit
    Left = 201
    Top = 501
    Width = 520
    Height = 31
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    Visible = False
  end
  object Edit6: TEdit
    Left = 201
    Top = 464
    Width = 520
    Height = 31
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    Visible = False
  end
  object Edit7: TEdit
    Left = 201
    Top = 538
    Width = 520
    Height = 31
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    Visible = False
  end
  object Chart1: TChart
    Left = 334
    Top = 31
    Width = 387
    Height = 346
    Legend.Font.Style = [fsBold, fsItalic]
    Title.Font.Color = clBlack
    Title.Font.Height = -20
    Title.Font.Style = [fsBold, fsItalic]
    Title.Text.Strings = (
      #1043#1088#1072#1092#1110#1082' '#1092#1091#1085#1082#1094#1110#1111' y=sin(x)+1')
    View3D = False
    View3DOptions.Orthogonal = False
    TabOrder = 11
    Visible = False
    DefaultCanvas = 'TGDIPlusCanvas'
    ColorPaletteIndex = 13
    object Series1: TFastLineSeries
      HoverElement = []
      LinePen.Color = 10708548
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
  end
  object Chart2: TChart
    Left = 727
    Top = 32
    Width = 387
    Height = 344
    Legend.Font.Style = [fsBold, fsItalic]
    Title.Font.Color = clBlack
    Title.Font.Height = -20
    Title.Font.Style = [fsBold, fsItalic]
    Title.Text.Strings = (
      #1043#1088#1072#1092#1110#1082' '#1092#1091#1085#1082#1094#1110#1111' y=cos(x)')
    View3D = False
    TabOrder = 12
    Visible = False
    DefaultCanvas = 'TGDIPlusCanvas'
    ColorPaletteIndex = 13
    object Series2: TFastLineSeries
      HoverElement = []
      LinePen.Color = 10708548
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
  end
  object MainMenu1: TMainMenu
    Left = 222
    Top = 584
    object N1: TMenuItem
      Caption = #1054#1073#1095#1080#1089#1083#1077#1085#1085#1103
      object N2: TMenuItem
        Caption = #1055#1088#1086#1090#1072#1073#1091#1083#1102#1074#1072#1090#1080' '#1092#1091#1085#1082#1094#1110#1102
        OnClick = N2Click
      end
      object N3: TMenuItem
        Caption = #1054#1095#1080#1089#1090#1080#1090#1080' '#1087#1086#1083#1077' '#1074#1080#1074#1077#1076#1077#1085#1085#1103
        OnClick = N3Click
      end
      object N12: TMenuItem
        Caption = #1053#1072#1084#1072#1083#1102#1074#1072#1090#1080' '#1075#1088#1072#1092#1110#1082
        OnClick = N12Click
      end
    end
    object N4: TMenuItem
      Caption = #1050#1110#1085#1077#1094#1100
      object N5: TMenuItem
        Caption = #1055#1088#1086' '#1087#1088#1086#1075#1088#1072#1084#1091
        OnClick = N5Click
      end
      object N6: TMenuItem
        Caption = #1050#1110#1085#1077#1094#1100
        OnClick = N6Click
      end
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 304
    Top = 584
    object N7: TMenuItem
      Caption = #1054#1095#1080#1089#1090#1080#1090#1080' '#1087#1086#1083#1077' '#1074#1080#1074#1077#1076#1077#1085#1085#1103' '
      OnClick = N7Click
    end
    object N8: TMenuItem
      Caption = #1050#1110#1085#1077#1094#1100
      OnClick = N8Click
    end
  end
  object PopupMenu2: TPopupMenu
    Left = 389
    Top = 584
    object N9: TMenuItem
      Caption = #1055#1086#1089#1090#1072#1074#1080#1090#1080' '#1074#1089#1110' '#1087#1088#1072#1087#1086#1088#1094#1110
      OnClick = N9Click
    end
    object N10: TMenuItem
      Caption = #1047#1085#1103#1090#1080' '#1074#1089#1110' '#1087#1088#1072#1087#1086#1088#1094#1110
      OnClick = N10Click
    end
    object N11: TMenuItem
      Caption = #1055#1086#1089#1090#1072#1074#1080#1090#1080' '#1110#1085#1074#1077#1088#1089#1080#1074#1085#1086
      OnClick = N11Click
    end
  end
end
