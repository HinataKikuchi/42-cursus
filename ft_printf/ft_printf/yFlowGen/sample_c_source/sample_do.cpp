// today_result.csvを読み込む
BOOL CCamCardDlg::GetCsv(void)
{
	m_vInCsvData.clear();

    CStdioFile csvFile;
    CFileException e;
    CString csvLine;

	CString strFolderPath;
	CString strInCsvPath;

	GetExeFolderPath(&strFolderPath);
	strInCsvPath = strFolderPath + TODAY_RESULT_CSV;

	char szInCsvPath[MAX_PATH];
	strcpy(szInCsvPath, strInCsvPath);

	CString strInCsvName;
	char szFile[MAX_PATH], szExt[MAX_PATH];
	_splitpath(szInCsvPath,NULL,NULL,szFile,szExt);
	strInCsvName.Format("%s%s", szFile, szExt);

	CString strErr;


    // CSVファイルを読み取り専用で開く
    if (csvFile.Open(szInCsvPath, CFile::modeRead | CFile::typeText, &e))
    {
        // カラムのインデックス
        int iCsvData = 0;

        // 行のインデックス
        int iCsvLine = 0;

        // データ
        CString csvData;

        // 1行読み取り中フラグ
        BOOL isCsvLineRead = FALSE;

        // 1行読み取り
        while(csvFile.ReadString(csvLine))
        {
            // csvLineに1行分の文字列が格納されている

            if (isCsvLineRead)
            {
                // データの中に改行が有り、改行コードの代わりに印を付ける
                // 場合は、ここで付ける。例えば、「[改行]」という文字列を
                // 入れる場合、次のコメント解除
                //csvData += L"[改行]";
            }
            else
            {
                iCsvData = 0;
                isCsvLineRead = TRUE;
            }

            // カンマ検索開始位置のインデックス
            int iStart = 0;

            while(isCsvLineRead)
            {
                // カンマのインデックス
                int iFind = csvLine.Find(L',', iStart);

                if (iFind == -1)
                {
                    // データ読み取り
                    // (行の最後)
                    csvData += csvLine.Mid(iStart);

                    // 行末の空白を削除する場合、次のコメント解除
                    //csvData.TrimRight();

                    isCsvLineRead = FALSE;
                }
                else
                {
                    // データ読み取り
                    // (行の最後以外)
                    csvData += csvLine.Mid(iStart, iFind - iStart);
                }

                // データがダブルクォートで囲まれている場合
                if (csvData.GetAt(0) == L'"')
                {
                    // ダブルクォートの直後に改行がある場合の対策として、
                    // csvData.GetLength()>1の判定を追加
                    if (csvData.GetLength() > 1 && csvData.GetAt(csvData.GetLength() - 1) == L'"')
                    {
                        // ダブルクォートの削除
                        csvData.Delete(csvData.GetLength() - 1);
                        csvData.Delete(0);
                    }
                    else
                    {
                        iStart = iFind + 1;

                        if (isCsvLineRead)
                        {
                            // ダブルクォートで囲まれた中にカンマがある
                            csvData += L',';
                            continue;
                        }
                        else
                        {
                            // ダブルクォートで囲まれた中に改行がある
                            isCsvLineRead = TRUE;
                            break;
                        }
                    }
                }

                // データの中に、ダブルクォートが2個連続する場合、1個を削除
                int iWQuote = -1;

                do
                {
                    iWQuote = csvData.Find("\"\"");

                    if (iWQuote != -1)
                    {
                        csvData.Delete(iWQuote);
                    }
                } while (iWQuote != -1);

                // ここで、
                // iCsvLine に、行のインデックス(ゼロ開始)
                // iCsvData に、カラムのインデックス(ゼロ開始)
                // csvData に、データが格納されている
                //
				//////////////////////////////////////////////////////////////////////////////////
				if (iCsvData == 0)
				{
					CARD_INF inf;
					inf.strName = csvData;
					m_vInCsvData.push_back(inf);
				}
				else if (iCsvData == 1)
				{
					m_vInCsvData[iCsvLine].strPassword = csvData;
				}
				else if (iCsvData == 2)
				{
					m_vInCsvData[iCsvLine].strSerial = csvData;
				}
				else if (iCsvData == 3)
				{
					m_vInCsvData[iCsvLine].strlowestPrice = csvData;
				}
				else if (iCsvData == 4)
				{
					m_vInCsvData[iCsvLine].strAvePrice = csvData;
				}
				//////////////////////////////////////////////////////////////////////////////////

                // カンマ検索開始位置の更新
                iStart = iFind + 1;

                // データのメモリ解放
                csvData.Empty();

                // カラムのインデックスをインクリメント
                iCsvData++;
            }

            if (!isCsvLineRead)
            {
                // 行のインデックスをインクリメント
                iCsvLine++;
            }
        }
    }
    else
    {
        // ファイルを開くのを失敗
		strErr.Format("%sを開けなかった。", strInCsvName);
		MessageBox(strErr, "エラー", MB_OK | MB_ICONERROR);
		return FALSE;
    }

    // ファイルを閉じる
    csvFile.Close();
	return TRUE;
}

