// today_result.csv��ǂݍ���
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


    // CSV�t�@�C����ǂݎ���p�ŊJ��
    if (csvFile.Open(szInCsvPath, CFile::modeRead | CFile::typeText, &e))
    {
        // �J�����̃C���f�b�N�X
        int iCsvData = 0;

        // �s�̃C���f�b�N�X
        int iCsvLine = 0;

        // �f�[�^
        CString csvData;

        // 1�s�ǂݎ�蒆�t���O
        BOOL isCsvLineRead = FALSE;

        // 1�s�ǂݎ��
        while(csvFile.ReadString(csvLine))
        {
            // csvLine��1�s���̕����񂪊i�[����Ă���

            if (isCsvLineRead)
            {
                // �f�[�^�̒��ɉ��s���L��A���s�R�[�h�̑���Ɉ��t����
                // �ꍇ�́A�����ŕt����B�Ⴆ�΁A�u[���s]�v�Ƃ����������
                // �����ꍇ�A���̃R�����g����
                //csvData += L"[���s]";
            }
            else
            {
                iCsvData = 0;
                isCsvLineRead = TRUE;
            }

            // �J���}�����J�n�ʒu�̃C���f�b�N�X
            int iStart = 0;

            while(isCsvLineRead)
            {
                // �J���}�̃C���f�b�N�X
                int iFind = csvLine.Find(L',', iStart);

                if (iFind == -1)
                {
                    // �f�[�^�ǂݎ��
                    // (�s�̍Ō�)
                    csvData += csvLine.Mid(iStart);

                    // �s���̋󔒂��폜����ꍇ�A���̃R�����g����
                    //csvData.TrimRight();

                    isCsvLineRead = FALSE;
                }
                else
                {
                    // �f�[�^�ǂݎ��
                    // (�s�̍Ō�ȊO)
                    csvData += csvLine.Mid(iStart, iFind - iStart);
                }

                // �f�[�^���_�u���N�H�[�g�ň͂܂�Ă���ꍇ
                if (csvData.GetAt(0) == L'"')
                {
                    // �_�u���N�H�[�g�̒���ɉ��s������ꍇ�̑΍�Ƃ��āA
                    // csvData.GetLength()>1�̔����ǉ�
                    if (csvData.GetLength() > 1 && csvData.GetAt(csvData.GetLength() - 1) == L'"')
                    {
                        // �_�u���N�H�[�g�̍폜
                        csvData.Delete(csvData.GetLength() - 1);
                        csvData.Delete(0);
                    }
                    else
                    {
                        iStart = iFind + 1;

                        if (isCsvLineRead)
                        {
                            // �_�u���N�H�[�g�ň͂܂ꂽ���ɃJ���}������
                            csvData += L',';
                            continue;
                        }
                        else
                        {
                            // �_�u���N�H�[�g�ň͂܂ꂽ���ɉ��s������
                            isCsvLineRead = TRUE;
                            break;
                        }
                    }
                }

                // �f�[�^�̒��ɁA�_�u���N�H�[�g��2�A������ꍇ�A1���폜
                int iWQuote = -1;

                do
                {
                    iWQuote = csvData.Find("\"\"");

                    if (iWQuote != -1)
                    {
                        csvData.Delete(iWQuote);
                    }
                } while (iWQuote != -1);

                // �����ŁA
                // iCsvLine �ɁA�s�̃C���f�b�N�X(�[���J�n)
                // iCsvData �ɁA�J�����̃C���f�b�N�X(�[���J�n)
                // csvData �ɁA�f�[�^���i�[����Ă���
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

                // �J���}�����J�n�ʒu�̍X�V
                iStart = iFind + 1;

                // �f�[�^�̃��������
                csvData.Empty();

                // �J�����̃C���f�b�N�X���C���N�������g
                iCsvData++;
            }

            if (!isCsvLineRead)
            {
                // �s�̃C���f�b�N�X���C���N�������g
                iCsvLine++;
            }
        }
    }
    else
    {
        // �t�@�C�����J���̂����s
		strErr.Format("%s���J���Ȃ������B", strInCsvName);
		MessageBox(strErr, "�G���[", MB_OK | MB_ICONERROR);
		return FALSE;
    }

    // �t�@�C�������
    csvFile.Close();
	return TRUE;
}

