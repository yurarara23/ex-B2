import pandas as pd

txt_file = 'serial_output.txt'
csv_file = 'cds_data.csv'

df = pd.read_csv(txt_file)

df.to_csv(csv_file, index=False)
print(f"CSVファイルとして保存しました: {csv_file}")

