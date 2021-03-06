#ifndef	INCLUDE_CALC_H
#define	INCLUDE_CALC_H

class CCalc{
	int m_nValue,m_nMax;
	BOOL m_bEnd;

public:
	void init(int max){	//初期化
		m_nValue=0;m_nMax=max;
		m_bEnd=FALSE;
	}

	void execute(){	//主処理
		while(m_nValue<m_nMax){
			m_nValue++;

			//負荷のかかる処理
			CString s;s.Format("%d",m_nValue);
		}
	}

	int getValue() const{	//値取得
		return m_nValue;
	}
	
	void setEnd(){
		m_bEnd=TRUE;
	}

	BOOL isEnd() const{	//終了したかどうか
		return m_bEnd;
	}
};

#endif	//INCLUDE_CALC_H